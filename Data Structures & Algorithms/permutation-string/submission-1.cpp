class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        vector<int> freqS1(26, 0);
        vector<int> freqS2(26, 0);
        int l = 0, r = 0;
        int windowSize = s1.length();

        for (int i = 0; i < s1.size(); i++) {
            freqS1[s1[i] - 'a']++;
        }

        while (r < s2.size()) {
            freqS2[s2[r] - 'a']++;

            if (r - l + 1 == windowSize) {
                if (freqS1 == freqS2) {
                    return true;
                }
                freqS2[s2[l] - 'a']--;
                l++;
            } 
            r++;
        }

        return false;
    }
};
