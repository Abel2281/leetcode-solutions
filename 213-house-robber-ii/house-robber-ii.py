class Solution:
    def rob(self, nums: list[int]) -> int:
        n = len(nums)
        if n==0 or n==1:
            return 0 if n==0 else nums[0]

        def rob_house(start,end):
            prev1=0
            prev2=0
            for i in range(start,end):
                curr = max(prev1,nums[i]+prev2)
                prev2,prev1 = prev1,curr
            return prev1

        return max(rob_house(0,n-1),rob_house(1,n))