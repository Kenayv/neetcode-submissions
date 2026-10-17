class Solution {
public:

    string encode(vector<string>& strs)
    {
        string coding = "#";
        string newStr = "";

        for (string str : strs)
        {
            
            newStr += str;
            coding += "." + to_string(str.size());
        }
        return newStr + coding + '.';
    }

    vector<string> decode(string s)
    {

        string coding = "";
        vector<string> result;


        for (int i = s.size() - 2; s[i + 1] != '#'; i--)
        {
            if (s[i] == '#')
                for (int j = i + 2; j < s.size(); j++)
                {
                    coding += s[j];
                }
        }

        string strLength = "";
        int index = 0;
        for (int i = 0; i < coding.size(); i++)
        {
            if (coding[i] != '.')
            {
                strLength += coding[i];
            }
            else {
                std::cout << "stoi: " << strLength <<'\n';
                int length = stoi(strLength);
                string currentStr = "";

                for (int j = 0; j < length && j<s.size(); j++)
                {
                    currentStr += s[index + j];
                }
                std::cout << currentStr << '\n';
                result.push_back(currentStr);
                index += length;

                strLength = "";
            }
            
        }

        return result;
    }
};

