// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
class Solution {
public:
    int firstBadVersion(int n) {
        long long int res=n,beg=1,end=n,mid;
        while(beg<=end){
            mid=(beg+end)/2;
            if(isBadVersion(mid)){
                res=mid;
                end=mid-1;
            }
            else
                beg=mid+1;
        }
        return res;
    }
};