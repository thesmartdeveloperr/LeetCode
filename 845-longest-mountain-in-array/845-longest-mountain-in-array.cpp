class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int res=0;
        for(int i=1;i<arr.size()-1;++i){
            int left=0,right=0;
            int ct=1,j=i;
            while(j>0 and arr[j-1]<arr[j])
                j--,left++;
            j=i;
            while(j<arr.size()-1 and arr[j+1]<arr[j])
                j++,right++;
            if(left==0 or right==0)
                ct=0,left=0,right=0;
            res=max(res,ct+left+right);
        }
        return res;
    }
};