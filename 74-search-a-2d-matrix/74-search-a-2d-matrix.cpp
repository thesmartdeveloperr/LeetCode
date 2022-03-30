class Solution {
public:
    // complexity will be nlogn..
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int low=0;
        int high=n-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            mid=low+(high-low)/2;
            if(matrix[mid][0]==target)
                return true;
            else if(matrix[mid][0]<target){
                low=mid+1;
                if(matrix[mid][m-1]<target)
                    mid++;
            }
            else{
                high=mid-1;
                if(matrix[mid][0]>target)
                    mid--;
            }
        }
        if(mid<0 or mid>n-1)
            return false;
        low=0;
        high=m-1;
        while(low<=high){
            int mi=low+(high-low)/2;
            if(matrix[mid][mi]==target)
                return true;
            else if(matrix[mid][mi]<target)
                low=mi+1;
            else
                high=mi-1;
        }
        return false;
        /* nlogn solution.*/
        // for(int i=0;i<matrix.size();++i){
        //     int low=0,high=matrix[i].size()-1;
        //     while(low<=high){
        //         int mid=(low+high)/2;
        //         if(matrix[i][mid]==target)
        //             return true;
        //         else if(matrix[i][mid]>target)
        //             high=mid-1;
        //         else
        //             low=mid+1;
        //     }
        // }
        // return false;
    }
};