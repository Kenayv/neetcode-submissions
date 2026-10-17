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
            for (auto& pair : count)
            {
                maxFreq = max(maxFreq, pair.second);
            }

            std::cout << maxFreq << ' ' << r << '\n';

            if (r - l + 1 - maxFreq <= k)
            {
                result = max(result, r - l + 1);
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
