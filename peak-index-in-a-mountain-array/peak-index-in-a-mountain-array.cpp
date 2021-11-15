class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int res=INT_MIN;
        // int max_elem=*max_element(arr.begin(),arr.end());
        // for(int i=0;i<arr.size();++i)
        //     if(arr[i]==max_elem)
        //         return i;
        int i=0,j=arr.size()-1,pos=0;
        while(i<=j){
            if(arr[i]>res){
                res=arr[i];
                pos=i;
            }
            if(arr[j]>res){
                res=arr[j];
                pos=j;
            }
            i++;
            j--;
        }
        return pos;
    }
};