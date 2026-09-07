class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> MinHeap;
        for(int num:nums){
            MinHeap.push(num);
            if(MinHeap.size() > k){
                MinHeap.pop();
            }
        }
        return MinHeap.top();
    }
};
