class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> numId;

        for(int i = 0; i<nums.size(); i++)
        {
            numId[nums[i]] = i;
        }

        for(int i = 0; i<nums.size(); i++)
        {
            if(numId.contains(target - nums[i]) && numId[target -nums[i]] != i) return {i, numId[target - nums[i]]};
        }

        return {-1,-1};
    }
};
