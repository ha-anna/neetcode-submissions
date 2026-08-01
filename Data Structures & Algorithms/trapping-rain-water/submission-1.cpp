class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxR(height.size());
        vector<int> maxL(height.size());
        int ml = 0;
        int mr = 0;
        int sum = 0;

        for (int i = 0; i < height.size(); i++) {
            maxL[i] = ml;
            ml = max(height[i], ml);
        }

        for (int i = height.size()-1; i >= 0; i--) {
            maxR[i] = mr;
            mr = max(mr, height[i]);
        }

        for (int i = 0; i < height.size(); i++) {
            int m = min(maxR[i], maxL[i]) - height[i];
            if (m > 0) sum += m;
        }

    return sum;
    }
};
