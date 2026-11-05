class Solution:
    def jobScheduling(self, startTime: list[int], endTime: list[int], profit: list[int]) -> int:
        n = len(endTime)
        arr = [[0, 0, 0] for _ in range(n)]
        for i in range(n):
            arr[i][0] = startTime[i]
            arr[i][1] = endTime[i]
            arr[i][2] = profit[i]
        arr.sort(key=lambda x: x[1])
        dp = [0] * (n+1)
        endings = [end[1] for end in arr]

        for i in range(n):
            start = arr[i][0]
            pro = arr[i][2]

            j = self.findComp(endings[:i],start)
            com = j+1
            
            take = pro + dp[com]
            skip = dp[i]
            dp[i+1] =  max(take,skip)
        return dp[-1]
    
    def findComp(self,endings,target):
        low, high = 0, len(endings)-1
        answer = -1
        while(low<=high):
            mid = (low+high)//2
            
            if(endings[mid]<=target):
                answer = mid
                low = mid+1
            else:
                high = mid-1
        return answer

    