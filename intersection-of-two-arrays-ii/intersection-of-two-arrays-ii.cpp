class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        if(nums1.size()>nums2.size()){
            map<int,int> mp;
            for(auto i:nums1)
                mp[i]++;
            for(int i=0;i<nums2.size();++i){
                if(mp.find(nums2[i])!=mp.end() and mp[nums2[i]]>0){
                    res.push_back(nums2[i]);
                    mp[nums2[i]]--;
                }
            }
        }
        else{
            map<int,int> mp;
            for(auto i:nums2)
                mp[i]++;
            for(int i=0;i<nums1.size();++i){
                if(mp.find(nums1[i])!=mp.end() and mp[nums1[i]]>0){
                    res.push_back(nums1[i]);
                    mp[nums1[i]]--;
                }
            }
        }
        return res;
    }
};