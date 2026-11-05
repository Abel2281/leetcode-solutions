class Solution:
    def maxTaxiEarnings(self, n: int, rides: list[list[int]]) -> int:
        rides.sort(key=lambda x: x[1])
        end = [end[1] for end in rides]
        n = len(end)
        dp = [0]*(n+1)

        for i in range(n):
            start = rides[i][0]
            tip = rides[i][2]
            profit = end[i]-start+tip

            j = bisect.bisect_right(end,start,0,i)-1
            com = j+1

            take = dp[com]+profit
            skip = dp[i]
            dp[i+1] = max(take,skip)
        return dp[-1]