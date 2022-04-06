// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

class Solution{
public:
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
        // code here
        int ct=0;
        for(int i=0;i<ranges.size();++i)
        swap(ranges[i][0],ranges[i][1]);
        sort(ranges.begin(),ranges.end());
        int tmp;
        for(int i=0;i<ranges.size();++i){
            if(i==0){
                ct++;
                tmp=ranges[i][0];
                continue;
            }
            if(ranges[i][1]>=tmp){
                tmp=ranges[i][0];
                ct++;
            }
        }
        return ct;
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

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}

  // } Driver Code Ends