class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //  forward pass version
        vector<int> result(nums.size());

        int forProd = 1;
        for (int i = 0; i < nums.size(); i++) {
            result[i] = forProd;
            forProd *= nums[i];
        }

        int backProd = 1;
        for (int j = nums.size() - 1; j >= 0; j--) {
            result[j] *= backProd;
            backProd *= nums[j];
        }

        return result;
    }
};
