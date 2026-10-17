class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, vector<int>> numsMap;

        for (int i = 0; i < nums.size(); i++)
        {
            numsMap[nums[i]].push_back(i);
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int targetK = target - nums[i];

            if (numsMap.find(targetK) != numsMap.end())
            {
                for (int& j : numsMap[targetK])
                {
                    if (i != j) return { i, j };
                }
            }
        }

        return {};
    }
};
