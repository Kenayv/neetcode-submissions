class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> numsMap;

        for (int i = 0; i < nums.size(); i++)
        {
            numsMap[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int targetK = target - nums[i];

            if (numsMap.count(targetK) && numsMap[targetK] != i)
            {     
               return { i, numsMap[targetK]};
            }
        }
        return {};
    }
};

