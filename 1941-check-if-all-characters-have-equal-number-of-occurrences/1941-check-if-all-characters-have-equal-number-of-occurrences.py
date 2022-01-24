class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        st=set()
        dic=dict()
        for i in s:
            if dic.get(i)==None:
                dic[i]=1
            else:
                dic[i]+=1
        for key,value in dic.items():
            # print(value,end=' ')
            st.add(value)
        if len(st)>1:
            return False
        return True