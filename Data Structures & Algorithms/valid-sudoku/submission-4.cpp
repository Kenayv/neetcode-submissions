class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        //check rows for duplicate numbers
        for (vector<char> row : board)
        {
            unordered_set<char> rowSet;

            for (char ch : row) {
                if (ch == '.') continue;
                if (rowSet.count(ch)) return false;
                rowSet.insert(ch);
            }
        }


        //check columns for duplicate numbers
        for (int i = 0; i< 9; i++)
        {
            unordered_set<char> colSet;
            for (int j = 0; j < 9; j++)
            {

                char ch = board[j][i];
                if (ch == '.') continue;
                if (colSet.count(ch)) return false;
                colSet.insert(ch);
            }
        }

        //check 3x3 tiles for duplicate numbers
        for (int k = 0; k < 3; k++)
        {
            unordered_set<char> gridSet;
            for (int i = 0; i < 9; i++)
            {
                if (i % 3 == 0) gridSet = {};
                for (int j = 0; j < 3; j++)
                {

                    char ch = board[i][j + k * 3];
                    if (ch == '.') continue;
                    if (gridSet.count(ch)) return false;
                    gridSet.insert(ch);
                }

               
            }
        }
        

        return true;
    }
};