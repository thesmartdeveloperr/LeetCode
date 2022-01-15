class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        n=len(s)
        for i in range(n):
            tmp=s[n-1-i:]+s[:n-1-i]
            if tmp==goal:
                return True
        return False