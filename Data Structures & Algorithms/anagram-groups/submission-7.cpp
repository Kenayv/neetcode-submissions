class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> keyStrings;

        for(string& str : strs)
        {
            vector<int> key(26,0);
            
            for(char& ch : str)
            {
                key[ch - 'a']++;
            }

            string strKey(26, '_');

            for(int i = 0; i < key.size(); i++)
            {
                strKey[i] = 'a' + key[i];
            }

            keyStrings[strKey].push_back(str);
        }
        vector<vector<string>> result;

        for(auto& pair : keyStrings) 
        {
            result.push_back(pair.second);
        }

        return result;
    }
};
