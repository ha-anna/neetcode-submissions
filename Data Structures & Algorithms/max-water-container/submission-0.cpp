class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = -1;
        for (int l = 0; l < heights.size() - 1; l++) {
            for (int r = l + 1; r < heights.size(); r++) {
                int m = min(heights[l], heights[r]);
                int area = m * (r - l);
                if (area > maxArea) maxArea = area;
            }
        }
        return maxArea;
    }
};
