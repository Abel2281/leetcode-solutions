class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        r_list = words[::-1]
        return " ".join(r_list)