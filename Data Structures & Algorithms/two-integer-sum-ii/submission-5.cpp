class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int l = 0;
        int r = numbers.size() - 1;

        while (l < r)
        {
            if (target == numbers[l] + numbers[r]) return {l + 1, r + 1 };

            if (target > numbers[l] + numbers[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return { l+1,r + 1 };
    }
};
