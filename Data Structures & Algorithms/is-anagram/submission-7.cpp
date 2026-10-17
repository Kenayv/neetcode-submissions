class Solution 
{
public:
    bool hash_isAnagram(string& s, string& t) 
    {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for (int i = 0; i < s.size(); i++)
        {
            sMap[s[i]]++;
            tMap[t[i]]++;
        }

        return sMap == tMap;
    }

   
    bool isAnagram(string& s, string& t)
    {
        if (s.size() != t.size()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != t[i]) return false;
        }
        return true;
    }
};