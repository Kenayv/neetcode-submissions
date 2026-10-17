class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> keyMap;

        for (string& str : strs)
        {
            vector<int> count(26, 0);
            for (char& ch : str)
            {
                count[ch - 'a']++;
            }
            string key = "";

            for (int i = 0; i < 26; i++) key += to_string(count[i]) + ',';

            keyMap[key].push_back(str);
        }

        vector<vector<string>> result;

        for (auto& pair : keyMap)
        {
            result.push_back(pair.second);
        }

        return result;
    }
};

