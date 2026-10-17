
class Solution 
{
public:

   
    bool isValid(string s)
    {
        unordered_map<char, char> closing =
        {
            {'(', ')'},
            {'[', ']'},
            {'{', '}'},
        };

        stack<char> st;

        for (char& ch : s)
        {
            if (closing.find(ch) != closing.end())
            {
                st.push(ch);
            }
            else 
            {
                if (st.empty() || closing[st.top()] != ch) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

