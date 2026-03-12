class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1=0;
        int rob2=0;
        for(int i = 0; i < nums.size(); i++){
            int n=nums[i];
            int current=max(n+rob1,rob2);
            rob1=rob2;
            rob2=current;
        }
        return rob2;
        
    }
}; 
