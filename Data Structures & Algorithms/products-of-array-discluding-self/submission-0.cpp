class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // brute force version
        vector<int> result(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int prod = 1;
            for (int j = 0; j < nums.size(); j++) {
                if (j == i) continue;
                prod *= nums[j];
            }
            result[i] = prod;
        }

        return result;
    }
};
