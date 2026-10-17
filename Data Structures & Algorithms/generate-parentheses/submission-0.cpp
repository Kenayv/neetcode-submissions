class Solution 
{
public:
    vector<string> result;

    vector<string> generateParenthesis(int n)
    {
        backtrack(0, 0, n, "");

        return result;
    }

    void backtrack(int closedCount, int openCount, int n, string cur)
    {
        if (closedCount == openCount && openCount == n)
        {
            result.push_back(cur);
            return;
        }

        if (openCount < n)
        {
            cur.push_back('(');
            backtrack(closedCount, openCount + 1, n, cur);
            cur.pop_back();
        }

        if (closedCount < openCount)
        {
            cur.push_back(')');
            backtrack(closedCount + 1, openCount, n, cur);
            cur.pop_back();
        }

    }

};