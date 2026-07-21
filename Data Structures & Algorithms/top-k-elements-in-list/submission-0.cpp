class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size() < 2) return nums;
        std::unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        std::vector<std::vector<int>> buckets(nums.size() + 1);

        for (auto x : freq){
            buckets[x.second].push_back(x.first);
        } 

        std::vector<int> result;
        for (int i = buckets.size() - 1; result.size() < k; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
            }
        }       

        return result;
    }
};
