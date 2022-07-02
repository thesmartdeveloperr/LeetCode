class Solution {
public:
    int maxArea(int h, int w, vector<int>& a, vector<int>& b) {
        a.push_back(0);
        a.push_back(h);
        b.push_back(0);
        b.push_back(w);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int height=INT_MIN;
        int width=INT_MIN;
        for(int i=0;i<a.size()-1;++i)
            height=max(height,a[i+1]-a[i]);
        for(int i=0;i<b.size()-1;++i)
            width=max(width,b[i+1]-b[i]);
        return (long long)height*width%1000000007;
    }
};