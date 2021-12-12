class Solution {
public:
    vector<vector<int>> mem;
    bool subsetSum(vector<int> &nums,int n,int pos,int sum){
        if(sum==0)
            return true;
        else if(pos>=n or sum<0)
            return false;
        if(mem[pos][sum]!=-1)
            return mem[pos][sum];
        
        return mem[pos][sum]=subsetSum(nums,n,pos+1,sum-nums[pos]) or subsetSum(nums,n,pos+1,sum);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum&1)
            return false;
        mem.clear();
        mem.resize(n+1,vector<int>(sum/2+1,-1));
        return subsetSum(nums,n,0,sum/2);
        // int i=0,s1=0,s2=0;
        // sort(nums.begin(),nums.end());
        // while(s1+nums[i]<=sum/2)
        //     s1+=nums[i++];
        // s2=accumulate(nums.begin()+i,nums.end(),0);
        // if(s1==s2)
        //     return true;
        // return false;
        // int s=0,n=nums.size();
        // for(int i=0;i<n;++i){
        //     s=0;
        //     for(int j=0;j<n-1;++j){
        //         if(j!=i)
        //             s+=nums[j];
        //         if(s==sum/2)
        //             break;
        //     }
        //     if(s==sum/2)
        //         break;
        // }
        // if(s==sum/2)
        //     return true;
        // return false;
    }
};