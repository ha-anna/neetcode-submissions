class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxR;
        vector<int> maxL;
        int ml = 0;
        int mr = 0;
        int sum = 0;

        for (int i = 0; i < height.size(); i++) {
            maxL.push_back(ml);
            if (height[i] > ml) ml = height[i];
        }

        for (int i = height.size()-1; i >= 0; i--) {
            maxR.push_back(mr);
            if (height[i] > mr) mr = height[i];
        }

        reverse(maxR.begin(), maxR.end());

        for (int i = 0; i < height.size(); i++) {
            int m = min(maxR[i], maxL[i]) - height[i];
            if (m > 0) sum += m;
        }


    return sum;
    }
};
