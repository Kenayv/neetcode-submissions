class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i - 1] == nums[i]) continue;

            int l = i + 1;
            int r = nums.size() - 1;
            
            while (l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];

                if (0 > sum)
                {
                    l++;
                }
                else if (0 < sum)
                {
                    r--;
                }
                else
                {
                    result.push_back({ nums[i],nums[l],nums[r] });
                    r--;
                    l++;
                    while (l < r && nums[l] == nums[l - 1])
                    {
                        l++;
                    }
                }
            }
           
        }
        return result;

    }
};

