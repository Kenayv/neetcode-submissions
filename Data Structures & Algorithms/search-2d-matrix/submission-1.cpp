class Solution {

    bool searchArray(vector<int> arr, int target)
    {
        int l = 0;
        int r = arr.size() - 1;
        int m = (l + r) / 2;

        while (l <= r)
        {

            if (arr[m] == target)
            {
                return true;
            }
            else if (arr[m] < target)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }

            m = (l + r) / 2;
        }

        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int l = 0;
        int r = matrix.size() - 1;
        int m = (l + r) / 2;

        while (l <= r)
        {
            int size = matrix[m].size();

            if (matrix[m][0] <= target && target <= matrix[m][size - 1])
            {
                return searchArray(matrix[m], target);
            }
            else if (matrix[m][0] < target)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }

            m = (l + r) / 2;
        }
        return false;
    }
};

