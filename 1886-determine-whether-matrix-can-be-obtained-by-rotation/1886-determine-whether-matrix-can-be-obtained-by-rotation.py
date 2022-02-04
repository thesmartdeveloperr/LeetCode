class Solution:
    def findRotation(self, mat: List[List[int]], target: List[List[int]]) -> bool:
        def transpose(mat,n,target,k):
            if k==3:
                return False
            mat.reverse()
            for i in range(n):
                for j in range(i,n):
                    mat[i][j],mat[j][i]=mat[j][i],mat[i][j]
            if mat==target:
                return True
            else:
                return transpose(mat,n,target,k+1)
        n=len(mat)
        if mat==target:
            return True
        return (transpose(mat,n,target,0))