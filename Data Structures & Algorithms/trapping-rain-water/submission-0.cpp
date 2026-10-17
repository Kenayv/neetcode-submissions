class Solution 
{
public:
    int trap(vector<int>& height) 
    {
        vector<int> prefix(height.size(), 0);
        vector<int> suffix(height.size(), 0);


        for (int i = 1; i < height.size(); i++)
        {
            prefix[i] = max(height[i - 1], prefix[i - 1]);
        }

        for (int i = height.size()-2; i >= 0 ; i--)
        {
            suffix[i] = max(height[i + 1], suffix[i + 1]);
        }
        
        int result = 0;

        for (int i = 0; i < height.size(); i++)
        {
            int waterTrapped = min(suffix[i], prefix[i]) - height[i];

            if (waterTrapped > 0)
            {
                result += waterTrapped;
            }
        }

        return result;
    }
};
