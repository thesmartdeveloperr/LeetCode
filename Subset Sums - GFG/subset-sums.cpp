// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void findSubset(int i,int n,vector<int> &arr,vector<int> &tmp,vector<int>&res)
    {
        if(i==n){
            int sum=0;
            for(auto i:tmp)
            sum+=i;
            res.push_back(sum);
            return;
        }
        //pick the elements
        tmp.push_back(arr[i]);
        findSubset(i+1,n,arr,tmp,res);
        tmp.pop_back();
        //do not pick
        findSubset(i+1,n,arr,tmp,res);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> res,tmp;
        findSubset(0,N,arr,tmp,res);
        sort(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends