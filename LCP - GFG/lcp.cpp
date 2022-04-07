// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        // code here
        if(n==1)
        return ar[0];
        string tmp=ar[0];
        for(int i=0;i<n;++i)
            if(tmp.size()>ar[i].size())
                tmp=ar[i];
        int i=0;
        bool fl=true;
        while(i<tmp.size() and fl){
            for(int j=1;j<n;++j){
                if(ar[j][i]!=tmp[i]){
                    fl=false;
                    i--;
                    break;
                }
            }
            i++;
        }
        string res="";
        for(int j=0;j<i;++j)
        res+=tmp[j];
        if(res=="")
            return "-1";
        return res;
    }
};

// { Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends