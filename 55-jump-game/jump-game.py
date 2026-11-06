class Solution:
    def canJump(self, nums: list[int]) -> bool:
        n = len(nums)
        far = 0
        for i in range(n):
            if i>far:
                return False
            far = max(far,nums[i]+i)
            if far>n-1:
                return True
        return True