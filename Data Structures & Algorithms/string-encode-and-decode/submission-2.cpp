class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        string sep = "~!~";
        for (int i = 0; i < strs.size(); i++) {
            result += strs[i] + sep;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string sep = "~!~";
        int cur_position = 0;
        int position;
        while ((position = s.find(sep, cur_position)) != string::npos) {
            int len = position - cur_position;
            string result = s.substr(cur_position, len);
            res.push_back(result);
            cur_position = position + 3;
        }

        return res;
    }
};
