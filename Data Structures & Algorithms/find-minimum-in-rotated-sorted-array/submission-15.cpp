class Solution {
public:
    int findMin(vector<int> &nums) 
    {
        int l = 0;
        int r = nums.size()-1  ;  

        int minVal = nums[0];

        while(l <= r)
        {
            int m = l + (r - l)/2;

            if(nums[m] <= nums[r])
            {
                minVal = min(minVal, nums[m]);
                r = m -1;
            }
            else
            {
                l = m + 1;
            }
        }

        return minVal;
    }
};
