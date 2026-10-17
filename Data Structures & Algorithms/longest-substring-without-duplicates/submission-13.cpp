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
            if (!sub.count(s[r]))
            {
                sub.insert(s[r]);
                r++;
                maxLength = max(maxLength, (int)sub.size());
            }
            else
            {
                while(sub.count(s[r])) sub.erase(s[l++]);
            }
        }

        return maxLength;
    }
};
