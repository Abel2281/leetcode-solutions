class Solution:
    def splitArray(self, nums: list[int], k: int) -> int:
        low = max(nums)
        high = sum(nums)

        while low<high:
            mid = (low+high)//2

            count = 1
            curr_sum = 0
            for i in nums:
                if curr_sum+i > mid:
                    count += 1
                    curr_sum = i
                else:
                    curr_sum += i
            if count > k:
                low = mid+1
            else:
                high = mid
        return low