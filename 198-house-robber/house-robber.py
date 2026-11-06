class Solution:
    def rob(self, nums: list[int]) -> int:
        n = len(nums)
        if n ==0 or n==1:
            return 0 if n==0 else nums[0]
        dp = [0]*(n+1)
        dp[0]=0
        dp[1]=nums[0]
        for i in range(2,n+1):
            take = nums[i-1]+dp[i-2]
            skip = dp[i-1]
            dp[i] = max(take,skip)
        return dp[-1]