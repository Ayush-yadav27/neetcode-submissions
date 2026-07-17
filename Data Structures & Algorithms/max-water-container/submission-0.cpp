class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int water = 0;
        while (i < j) {
            int ar = (j - i) * min(heights[i], heights[j]);
            water = max(ar, water);
            if (heights[i] < heights[j])
                i++;
            else
                j--;
        }
        return water;
    }
};
