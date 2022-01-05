class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        res = 9999
        i=0
        for j in range(len(nums)):
            target -= nums[j]
            while (target <= 0):
                res = min(res, j - i + 1)
                target += nums[i]
                i += 1
        if(res==9999):
            return 0
        else:
            return res
