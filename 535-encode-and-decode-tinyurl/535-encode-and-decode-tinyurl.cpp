class Solution {
public:
    int num=0;
    map<string,string> mp;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        num++;
        string shortUrl="http://tinyurl.com/";
        shortUrl+=to_string(num);
        mp[shortUrl]=longUrl;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));