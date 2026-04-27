class Solution {
  public:
    vector<int> parent;
    
    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }
    
    void unite(int x) {
        parent[x] = x - 1;
    }
    
    vector<int> jobSequencing(vector<int>& deadline, vector<int>& profit) {
        int n = deadline.size();
        int maxDeadline = *max_element(deadline.begin(), deadline.end());
        
        parent.resize(maxDeadline + 1);
        for (int i = 0; i <= maxDeadline; i++)
            parent[i] = i;
        
        vector<pair<int,int>> jobs(n);
        for (int i = 0; i < n; i++)
            jobs[i] = {profit[i], deadline[i]};
        
        sort(jobs.begin(), jobs.end(), greater<pair<int,int>>());
        
        int countJobs = 0, totalProfit = 0;
        
        for (int i = 0; i < n; i++) {
            int d = jobs[i].second;
            int p = jobs[i].first;
            
            int availableSlot = find(d);
            
            if (availableSlot > 0) {
                unite(availableSlot);
                countJobs++;
                totalProfit += p;
            }
        }
        
        return {countJobs, totalProfit};
    }
};
