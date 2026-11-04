class Solution:
    def findContentChildren(self, g: list[int], s: list[int]) -> int:
        l,r = 0,0
        g.sort()
        s.sort()
        while(l<len(s) and r<len(g)):
            if(g[r]<=s[l]):
                r += 1
            l += 1
        return r