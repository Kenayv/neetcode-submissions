class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> triplets;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i+1;
            int r = nums.size() - 1;

            while (l < r)
            {
                if (-nums[i] == nums[l] + nums[r])
                {
                    triplets.push_back({ nums[i], nums[l], nums[r], });
                    
                    r--;
                    l++;
                    while (nums[l] == nums[l - 1]) l++;
  
                }
                else if (-nums[i] > nums[l] + nums[r])
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }

        return triplets;
    }
};
