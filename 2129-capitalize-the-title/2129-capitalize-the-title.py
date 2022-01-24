class Solution:
    def capitalizeTitle(self, title: str) -> str:
        lis=title.split()
        res=[]
        for i in lis:
            if len(i)<3:
                res.append(i.lower())
            else:
                res.append(i.capitalize())
            res.append(' ')
        res.pop()
        return "".join(res)