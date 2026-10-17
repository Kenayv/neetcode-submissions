
class Solution {
public:

    string encode(vector<string>& strs)
    {
        string coding = "#";
        string newStr = "";

        for (string str : strs)
        {
            newStr += str;
            coding += to_string(str.size()) + '.';
        }
        return newStr + coding;
    }

    vector<string> decode(string s)
    {
        string coding = "";
        for (int i = s.size() - 2; s[i + 1] != '#'; i--)
        {
            if (s[i] == '#')
                for (int j = i + 1; j < s.size(); j++)
                {
                    coding += s[j];
                }
        }

        int index = 0;
        string strLength = "";
        vector<string> result;
        for (int i = 0; i < coding.size(); i++)
        {
            if (coding[i] != '.')
            {
                strLength += coding[i];
            }
            else 
            {
                int length = stoi(strLength);
                string currentStr = "";

                for (int j = 0; j < length && j<s.size(); j++)
                {
                    currentStr += s[index + j];
                }

                strLength = "";
                index += length;
                result.push_back(currentStr);
            }
            
        }
        return result;
    }
};

