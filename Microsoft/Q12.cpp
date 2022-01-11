// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        // Your code goes here
        vector< vector<int> > result;
    	int n = nums.size();
    	if (n < 4) 	return result;
    
    
    	sort(nums.begin(), nums.end());
    	for (int i = 0; i < n-3; ++i) {
    		if (target <= 0 && nums[i] > 0) break;
    
    		if (nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target) break;
    		if (nums[i] + nums[n-3] + nums[n-2] + nums[n-1] < target) continue; 
    		if (i > 0 && nums[i] == nums[i-1]) continue;
    
    		for (int j = i+1; j < n - 2; ++j) {
    			if (nums[i] + nums[j] + nums[j+1] + nums[j+2] > target) break;
    			if (nums[i] + nums[j] + nums[n-2] + nums[n-1] < target) continue; 
    			if (j > i+1 && nums[j] == nums[j-1]) continue;
    
    			int left = j+1, right = n-1;
    			while (left < right) {
    				int sum = nums[i] + nums[j] + nums[left] + nums[right];
    				if (sum == target) 
                    {
    					result.push_back({nums[i], nums[j], nums[left], nums[right]});
    					int last_left = nums[left], last_right = nums[right];
    					while (left < right && nums[left] == last_left) ++left;
    					while (left < right && nums[right] == last_right) --right;
    				} 
                    else if (sum < target) { ++left; } 
                    else { --right; }
    			}
    		}
    	}
    	return result;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
