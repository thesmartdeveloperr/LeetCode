class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
          vector<int> v1, v2;
        set<int> s1(nums1.begin(),nums1.end()) , s2(nums2.begin(),nums2.end());
        set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(v1));
        set_difference(s2.begin(),s2.end(),s1.begin(),s1.end(),back_inserter(v2));
        return {v1,v2};
    }
};