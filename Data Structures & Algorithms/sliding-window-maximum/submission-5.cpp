class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> answer;

        for (int r = 0; r < nums.size(); r++) {
            while (!dq.empty() && dq.front() < r - k + 1) {
                dq.pop_front();
            }

            while (!dq.empty() && nums[dq.back()] < nums[r]) {
                dq.pop_back();
            }

            dq.push_back(r);

            if (r >= k - 1) {
                answer.push_back(nums[dq.front()]);
            }
        }

        return answer;
    }
};
