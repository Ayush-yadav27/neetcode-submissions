class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=1;
        sort(nums.begin(),nums.end());
        while(i<nums.size()){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
            i++;
        }
        return -1; 
    }
};
