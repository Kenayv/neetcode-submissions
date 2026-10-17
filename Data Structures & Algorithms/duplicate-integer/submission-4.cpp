class Solution {
public:

    bool hash_hasDuplicate(vector<int>& nums)
    {
        unordered_set<int> uniqueNums;

        for (int& num : nums)
        {
            if (uniqueNums.count(num)) return true;

            uniqueNums.insert(num);
        }
        
        return false;
    }

    bool hasDuplicate(vector<int>& nums)
    {
        if(nums.size() <= 1) return false;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1]) return true;
        }

        return false;
    }
};