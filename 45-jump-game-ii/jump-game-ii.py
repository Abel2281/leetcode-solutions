class Solution:
    def jump(self, nums: list[int]) -> int:
        jumps = 0
        l,r = 0,0
        n = len(nums)
        while(r<n-1):
            far = 0
            for i in range(l,r+1):
                far = max(far,i+nums[i])
            l = r+1
            r = far
            jumps += 1
        return jumps