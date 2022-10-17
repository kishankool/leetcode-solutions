class Solution {
public:
    unordered_map<string,string>m;
    int cnt=0;
    string s;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        s+="a";
        m[s]=longUrl;
        return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m.find(shortUrl)->second;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));