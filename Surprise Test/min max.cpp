#include <bits/stdc++.h>
using namespace std;

int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    int minUnfairness = INT_MAX;
    for (int i = 0; i <= (int)arr.size() - k; i++) {
        minUnfairness = min(minUnfairness, arr[i + k - 1] - arr[i]);
    }
    
    return minUnfairness;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    cout << maxMin(k, arr) << endl;
    return 0;
}
