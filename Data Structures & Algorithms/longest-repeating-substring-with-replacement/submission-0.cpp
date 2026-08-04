class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int maxFrequency = 0;
        int answer = 0;
        vector<int> freq(26, 0);

        while (r < s.size()) {
            freq[s[r] - 'A']++;
            maxFrequency = max(maxFrequency, freq[s[r] - 'A']);

            while ((r - l + 1) - maxFrequency > k) {
                freq[s[l] - 'A']--;
                l++;
            }

            answer = max(answer, r - l + 1);

            r++;
        }

        return answer;
    }
};
