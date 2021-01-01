class Solution:
    def toGoatLatin(self, S: str) -> str:
        S_as_array = S.split(" ")
        ma = "maa"
        ans = [] 
        for string in S_as_array:
            if self.isVowel(string[0]):
                ans.append(string+ma)
            else:
                ans.append(string[1:] + string[0] + ma)
            ma += "a"
        return " ".join(ans)

    def isVowel(self, a: str) -> bool:
        return a in "aeiouAEIOU"
