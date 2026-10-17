class Solution 
{
public:
    int characterReplacement(string s, int k) 
    {
        int l = 0, r = 0;

        unordered_map<char, int> count;

        int result = 0;

        while (r < s.size())
        {
            count[s[r]]++; 

            int maxFreq = 0;
            int winSize = r - l + 1;

            for (auto& pair : count)
            {
                maxFreq = max(maxFreq, pair.second);
            }

            if (winSize - maxFreq <= k)
            {
                result = max(result, winSize);
            }
            else
            {
                count[s[l]]--;
                l++;
            }

            r++;
        }

        return result;
    }
};
