class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        
        unordered_map<string, vector<string>> keyMap;

        for (const string& str : strs)
        {
            vector<int> count(26, 0);

            for (const char& ch : str)
            {
                count[ch - 'a']++;
            }

            string key;

            for (const int& i : count)
            {
                key.push_back(i);
                key.push_back('.');
            }

            keyMap[key].push_back(str);
        }
        vector<vector<string>> result;

        for (auto& pair : keyMap) result.push_back(pair.second);

        return result;
    }
};
