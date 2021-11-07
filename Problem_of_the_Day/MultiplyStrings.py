class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        s1 = len(num1)
        s2 = len(num2)
        a = 0
        b = 0
        for i in range(s1):
            a += (ord(num1[i])-ord('0')) * (10**(s1-i-1)) 
        for i in range(s2):
            b += (ord(num2[i])-ord('0')) * (10**(s2-i-1))
        return str(a*b)
  
