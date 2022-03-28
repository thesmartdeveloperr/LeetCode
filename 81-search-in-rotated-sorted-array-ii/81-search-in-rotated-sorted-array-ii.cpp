class Solution {
public:
    bool search(vector<int>& A, int target) {
        int low =0, high = A.size()-1;
        int mid = 0;
        while(low<high){
            mid=(low+high)/2;
            if(A[mid]==target) 
                return true;
            if(A[mid]>A[high]){
                if(A[mid]>target && A[low] <= target) 
                    high = mid;
                else 
                    low = mid + 1;
            }
            else if(A[mid] < A[high]){
                if(A[mid]<target && A[high] >= target) 
                    low = mid + 1;
                else 
                    high = mid;
            }
            else{
              high--;
            }
        }
        return A[low] == target ? true : false;
    }
};