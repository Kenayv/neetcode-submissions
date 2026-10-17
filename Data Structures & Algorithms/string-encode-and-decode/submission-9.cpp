class Solution {
public:
    string encode(vector<string>& strs)
    {
        if (strs.size() == 0) return "emptyVec";
        string prefix = "";
        string result = "";

        for (string& str : strs)
        {
            prefix += to_string(str.size()) + ',';
            result += str;
        }

        if (result == "") return result;

        prefix[prefix.size() - 1] = '#';

        return prefix + result;
    }

    vector<string> decode(string s)
    {
        if (s == "") return { "" };
        if (s == "emptyVec") return {};

        vector<int> lengths;
        int prefixLength = 0;

        string currentLength = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '#')
            {
                lengths.push_back(stoi(currentLength));
                prefixLength = i + 1;
                break;
            }
            else if (s[i] == ',')
            {
                lengths.push_back(stoi(currentLength));
                currentLength = "";
            }
            else
            {
                currentLength += s[i];
            }
        }

        vector<string> result;
        int strIndex = 0;

        for (int p = prefixLength; p < s.size();)
        {
            string currentString = "";
            for (int i = 0; i < lengths[strIndex]; i++)
            {
                currentString += s[p];
                p++;
            }
            result.push_back(currentString);
            strIndex++;
        }

        return result;
    }
};