class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        for i in range(len(word)):
            if word[i] == ch:
                #reverse word from word(0,i+1) then add word(i+1,end)
                return word[:i+1][::-1] + word[i+1:]
        
        return word
