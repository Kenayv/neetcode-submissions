class Solution 
{
public:
    int maxArea(vector<int>& heights) 
    {
        int l = 0;
        int r = heights.size() - 1;

        int maxVolume = 0;
        while (l < r)
        {
            int currentVol = min(heights[l], heights[r]) * (r - l);
            if (currentVol > maxVolume) maxVolume = currentVol;

            if (heights[l] > heights[r]) r--;
            else l++;
        }

        return maxVolume;
    }
};
