class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ct1=0,ct2=0,ct3=0,ct4=0;
        int nums1=tops[0],nums2=bottoms[0];
        for(int i=0;i<tops.size();++i){
            if(ct1!=INT_MAX){
                //make tops equal to tops[0]
                if(tops[i]==nums1){
                    //continue;
                }
                else if(bottoms[i]==nums1)
                    ct1++;
                else
                    ct1=INT_MAX;
            }
            if(ct2!=INT_MAX){
                // make bottoms equal to tops[0]
                if(bottoms[i]==nums1){
                    // continue;   
                }
                else if(tops[i]==nums1)
                    ct2++;
                else
                    ct2=INT_MAX;
            }
            if(ct3!=INT_MAX){
                //make tops equal to bottoms[0]
                if(tops[i]==nums2){
                    // continue;   
                }
                else if(bottoms[i]==nums2)
                    ct3++;
                else
                    ct3=INT_MAX;
            }
            if(ct4!=INT_MAX){
                // make bottoms equal to bottoms[0];
                if(bottoms[i]==nums2){
                    // continue;   
                }
                else if(tops[i]==nums2)
                    ct4++;
                else
                    ct4=INT_MAX;
            }
        }
        int res=min({ct1,ct2,ct3,ct4});
        return res==INT_MAX?-1:res;
    }
};