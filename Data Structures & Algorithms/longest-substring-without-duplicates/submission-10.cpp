class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.size() <= 1) return s.size();

        unordered_set<char> uniqueChars = { s[0] };
        int l = 0;
        int r = 1;

        int maxSize = 1;

        while (r < s.size())
        {

            while (uniqueChars.count(s[r]))
            {
                uniqueChars.erase(s[l]);
                l++;
            }

            uniqueChars.insert(s[r]);
            maxSize = max(maxSize, int(uniqueChars.size()));

            r++;
        }
        return maxSize;
    }
};
