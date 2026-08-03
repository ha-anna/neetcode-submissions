class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> str;
        int l = 0;
        int r = 0;
        int m = 0;

        while (r < s.size()) {
            if (str.contains(s[r])) {
                str.erase(s[l]);
                l++;
            } else {
                str.insert(s[r]);
                r++;
                m = max(m, r - l);
            }
        }

        return m;
    }
};
