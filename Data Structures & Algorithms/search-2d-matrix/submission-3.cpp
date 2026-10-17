class Solution {

    bool containsN(vector<int>& v, int target)
    {
        int l = 0;
        int r = v.size() - 1;

        while (l <= r)
        {
            int m = (l + r) / 2;

            if (v[m] == target) return true;

            if (v[m] > target)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

        return false;
    }

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int l = 0;
        int r = matrix.size() - 1;

        while (l <= r)
        {
            int m = (l + r) / 2;
            if (matrix[m][0] > target)
            {
                r = m - 1;
            }
            else if (matrix[m].back()  < target)
            {
                l = m + 1;
            }
            else
            {
                return containsN(matrix[m], target);
            }
        }
        return false;
    }
};