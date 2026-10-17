class Solution {
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int> st;

        for (string& token : tokens)
        {
            if (token.length() > 1 || token[0] >= '0' && token[0] <= '9')
            {
                st.push(stoi(token));
            }
            else
            {
                int n = st.top();
                st.pop();

                switch (token[0])
                {
                case '-':
                    st.top() -= n;
                    break;

                case '+':
                    st.top() += n;
                    break;

                case '*':
                    st.top() *= n;
                    break;

                case '/':
                    st.top() /= n;
                    break;
                }
            }
        }

        return st.top();
    }
};

