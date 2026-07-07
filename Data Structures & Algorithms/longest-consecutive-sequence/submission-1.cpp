class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int length = 1;
        int streak = 1;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])
                continue;
            else if (nums[i - 1] + 1 == nums[i])
                streak++;
            else {
                length = max(length, streak);
                streak = 1;
            }
        }
        return max(length, streak);
    }
};
