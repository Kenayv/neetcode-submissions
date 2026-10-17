class Solution {

    bool searchArray(vector<int> arr, int target)
    {
        int l = 0;
        int r = arr.size() - 1;
        int m;

        while (l <= r)
        {
            m = (l + r) / 2;

            if (arr[m] == target) 
                return true;
            
            if (arr[m] < target) 
                l = m + 1;
            else 
                r = m - 1;
        }

        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int l = 0;
        int r = matrix.size() - 1;
        int m;

        while (l <= r)
        {
            m = (l + r) / 2;
            int size = matrix[m].size();

            if (matrix[m][0] <= target && target <= matrix[m][size - 1])
                return searchArray(matrix[m], target);

            if (matrix[m][0] < target)
                l = m + 1;
            else
                r = m - 1;
        }
        return false;
    }
};
