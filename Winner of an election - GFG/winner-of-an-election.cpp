// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        int mx=INT_MIN;
        map<string,int> mp;
        for(int i=0;i<n;++i){
            mp[arr[i]]++;
            mx=max(mx,mp[arr[i]]);
        }
        vector<string> ans;
        for(auto i:mp){
            if(i.second==mx)
            ans.push_back(i.first);
            
        }
        sort(ans.begin(),ans.end());
        return {ans[0],to_string(mp[ans[0]])};
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends