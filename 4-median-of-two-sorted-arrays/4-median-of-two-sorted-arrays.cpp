class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double res;
        int n=nums1.size(),m=nums2.size();
        vector<int> sorted;
        int i=0,j=0;
        while(i<n and j<m){
            if(nums1[i]<=nums2[j]){
                sorted.push_back(nums1[i]);
                i++;
            }
            else{
                sorted.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            sorted.push_back(nums1[i++]);
        }
        while(j<m){
            sorted.push_back(nums2[j++]);
        }
        if(sorted.size()&1){
            return (double)sorted[sorted.size()/2];
        }
        return (double)(sorted[(sorted.size()-1)/2]+sorted[sorted.size()/2])/2;
    }
};