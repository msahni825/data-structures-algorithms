class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        #create 2 lists position and output(finding min dist of each char in lis with ch
        pos = []
        output= []
        n = len(s)
        for i in range(n):
            if s[i] == c:
                pos.append(i)
        for i in range(n):
            min_dist = n
            for j in pos:
                min_dist = min(min_dist, abs(i-j))
            output.append(min_dist)
        return output
                               
