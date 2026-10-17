class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> res;

        for (const auto& str : strs)
        {
            vector<int> key(26, 0);

            for (char ch : str)
            {
                key[ch - 'a']++;
            }
            string strKey = to_string(key[0]);

            for (int i = 1; i < key.size(); i++)
            {
                strKey += ',' + to_string(key[i]);
            }

            res[strKey].push_back(str);
        }

        vector<vector<string>> result;

        for (const auto& pair : res) result.push_back(pair.second);

        return result;
    }

    vector<vector<string>> sortkey_groupAnagrams(vector<string>& strs)
    {
        unordered_map<string, vector<string>> keyMap;

        for (string& str : strs)
        {
            string key = str;
            sort(key.begin(), key.end());

            keyMap[key].push_back(str);
        }

        vector<vector<string>> result;

        for (auto& pair : keyMap) result.push_back(pair.second);

        return result;
    }
};