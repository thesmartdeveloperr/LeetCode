// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int res=INT_MIN;
        vector<int> left(n),right(n);
        long long mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<n;++i){
            if(arr[i]<mn)
                mn=arr[i];
            left[i]=mn;
        }
        for(int i=n-1;i>=0;--i){
            if(arr[i]>mx)
                mx=arr[i];
            right[i]=mx;
        }
        int i=0,j=0;
        while(i<n and j<n){
            if(left[i]<=right[j]){
                if(j-i>res)
                    res=j-i;
                j++;
            }
            else{
                i++;
            }
        }
        return res;
    }

};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends