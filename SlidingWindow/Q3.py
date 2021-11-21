class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        c=0
        for i in range(2,len(s)):
            if(s[i]!=s[i-1] and s[i-1]!=s[i-2] and s[i-2]!=s[i]):
                c=c+1
        return c
