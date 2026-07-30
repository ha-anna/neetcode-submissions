class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int maxArea = 0;
        while (l < r) {
            int m = min(heights[l], heights[r]);
            int area = m * (r - l);

            maxArea = max(maxArea, area);

            if (heights[l] < heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        
        return maxArea;
    }
};
