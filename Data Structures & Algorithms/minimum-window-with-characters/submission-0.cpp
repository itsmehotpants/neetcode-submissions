class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) return "";

    // ASCII ranges from(0-127)
        vector<int> mp(128,0);
        for (char c : t) mp[c]++;

        int l = 0, r = 0, count = t.length(); // count=  no. of required characters
        int minLen = INT_MAX, start = 0;

        while (r < s.length()) {
            if (mp[s[r++]]-- > 0) count--; 
    // Minimizing the Window
            while (count == 0) {
                if (r - l < minLen) {
                    minLen = r - l;
                    start = l;
                }
                if (++mp[s[l++]] > 0) count++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
