class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini = INT_MAX;
        long long sum = 0;
        int left = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            while (sum >= target) {
                mini=min(mini,i-left+1);
                sum -= nums[left];
                left++;
            }
        }
        if (mini == INT_MAX) {
            return 0;
        }
        return mini;
    }
};