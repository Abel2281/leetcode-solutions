class Solution:
    def rob(self, nums: list[int]) -> int:
        n = len(nums)
        if n ==0 or n==1:
            return 0 if n==0 else nums[0]
        dp = [0]*(n+1)
        for i in range(n):
            take = nums[i]+dp[i-1] if i>=1 else nums[i]
            skip = dp[i]
            dp[i+1] = max(take,skip)
        return dp[-1]