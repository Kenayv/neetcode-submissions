class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        int l = 0;
        int r = 0;
        int maxLength = 0;

        unordered_set<char> sub;

        while (r < s.size())
        {
            while (sub.count(s[r]))
            {
                sub.erase(s[l++]);
            }
            sub.insert(s[r++]);
            maxLength = max(maxLength, (int)sub.size());
        }

        return maxLength;
    }
};
