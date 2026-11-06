class Solution:
    def rob(self, nums: list[int]) -> int:
        n = len(nums)
        if n ==0 or n==1:
            return 0 if n==0 else nums[0]
        prev1=nums[0]
        prev2=0
        curr = 0
        for i in range(1,n):
            curr = max(prev1,nums[i]+prev2)
            prev2 = prev1
            prev1 = curr
        return curr