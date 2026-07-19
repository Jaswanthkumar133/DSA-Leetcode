class Solution {
private:
    // Helper function to find subarrays with AT MOST k distinct numbers
    int atMostK(vector<int>& nums, int k) {
        int count = 0;
        int left = 0;
        unordered_map<int, int> mpp;
        
        for (int right = 0; right < nums.size(); right++) {
            mpp[nums[right]]++;
            
            // Shrink window if distinct elements exceed k
            while (mpp.size() > k) {
                mpp[nums[left]]--;
                if (mpp[nums[left]] == 0) {
                    mpp.erase(nums[left]);
                }
                left++;
            }
            
            // Add all valid subarrays ending at the 'right' index
            count += (right - left + 1);
        }
        return count;
    }

public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};
