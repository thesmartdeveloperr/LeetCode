// { Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    vector<int> print_next_greater_freq(int arr[],int n)
    {
        // code here
        vector<int> res(n);
        map<int,int> mp;
        for(int i=0;i<n;++i)
        mp[arr[i]]++;
        stack<int> st;
        for(int i=n-1;i>=0;--i){
            if(i==n-1){
                res[i]=-1;
                st.push(arr[i]);
                continue;
            }
            while(!st.empty() and mp[arr[i]]>=mp[st.top()])
                st.pop();
            if(st.empty())
                res[i]=-1;
            else
                res[i]=st.top();
            st.push(arr[i]);
        }
        return res;
    }
};


// { Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
	return 1;
}
  // } Driver Code Ends