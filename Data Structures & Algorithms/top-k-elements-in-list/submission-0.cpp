class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto it : freq) {
            buckets[it.second].push_back(it.first);
        }
        vector<int> ans;
        for (int i = nums.size(); i > 0 && ans.size() < k; i--) {
            for (int x : buckets[i]) {
                ans.push_back(x);
                if (ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
