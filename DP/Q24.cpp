class Solution:
    def numDecodings(self, s: str) -> int:
        n = len(s)
        def countWaysDP():
            prev=0
            res=1
            for i in range(n-1,-1,-1):
                t=res
                res=res if 0 < int(s[i]) <= 9 else 0
                res += prev if 10 <= int(s[i:i+2]) <= 26 else 0
                prev = t
            return res
        return countWaysDP()
      
    
