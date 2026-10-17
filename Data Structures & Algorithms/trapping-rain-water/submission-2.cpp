class Solution 
{
public:
    int trap(vector<int>& height)
    {
        vector<int> leftMax(height.size(), 0);
        vector<int> rightMax(height.size(), 0);

        for (int i = 1; i < height.size(); i++)
        {
            leftMax[i] = max(leftMax[i - 1], height[i - 1]);
        }

        for (int i = height.size()-2; i >= 0; i--)
        {
            rightMax[i] = max(rightMax[i + 1], height[i + 1]);
        }

        int result = 0;

        for (int i = 0; i < height.size(); i++)
        {
            int trapped = min(leftMax[i], rightMax[i]) - height[i];

            if (trapped > 0) result += trapped;
        }
        

        return result;
    }
};

