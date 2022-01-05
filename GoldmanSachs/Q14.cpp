class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, n = nums.size(), res = INT_MAX;
        for (int j = 0; j < n; j++) {
            target -= nums[j];
            while (target <= 0) {
                res = min(res, j - i + 1);
                target += nums[i++];
            }
        }
        if(res==INT_MAX) return 0;
        else return res;
    }
};
