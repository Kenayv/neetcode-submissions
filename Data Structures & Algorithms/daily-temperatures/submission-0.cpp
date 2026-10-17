class Solution 
{
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        stack<pair<int, int>> st; // <index, value>
        vector<int> result(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++)
        {
            while (!st.empty() && st.top().second < temperatures[i])
            {
                result[st.top().first] = i - st.top().first;
                st.pop();
            }
            st.push({ i, temperatures[i] });
        }

        return result;
    }
};

