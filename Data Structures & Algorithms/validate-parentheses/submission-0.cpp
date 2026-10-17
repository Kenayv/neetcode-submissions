
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> closedOpen = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        stack<char> stack;

        for (char ch : s)
        {
            if (closedOpen.count(ch))
            {
                if (!stack.empty() && stack.top() == closedOpen[ch]) 
                {
                    stack.pop();
                } 
                else return false;
                
            }
            else
            {
                stack.push(ch);
            }
        }
        return stack.empty();
    }
};