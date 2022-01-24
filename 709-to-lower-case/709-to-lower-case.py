class Solution:
    def toLowerCase(self, s: str) -> str:
        lis=[]
        for i in s:
            if i.isupper():
                lis.append(i.lower())
            else:
                lis.append(i)
        return "".join(lis)