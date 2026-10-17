class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        int maxSize = 0;

        int l = 0;
        int r = heights.size() - 1;

        while (l < r)
        {
            int minHeight = min(heights[l], heights[r]);
            int distance = r - l;

            maxSize = max(maxSize, minHeight * distance);

            if (heights[l] <= heights[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxSize;
    }
};
