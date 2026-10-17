
class Solution {
public:
    bool correctClosing(char b1, char b2)
    {
        return (
            b1 == '[' && b2 == ']' ||
            b1 == '{' && b2 == '}' ||
            b1 == '(' && b2 == ')'
            );
    }

    bool isValid(string s)
    {
        stack<char> st;

        for (char& ch : s)
        {
            switch (ch)
            {
            case ')':
                if (st.empty() || !correctClosing(st.top(), ch)) return false;

                st.pop();
                break;

            case '}':
                if (st.empty() || !correctClosing(st.top(), ch)) return false;

                st.pop();
                break;

            case ']':
                if (st.empty() || !correctClosing(st.top(), ch)) return false;

                st.pop();
                break;

            default:
                st.push(ch);
                break;
            }
        }

        return st.empty();
    }
};

