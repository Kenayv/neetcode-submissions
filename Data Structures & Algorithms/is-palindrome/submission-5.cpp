class Solution {
public:
    bool isAlphaNum(char& ch)
    {
        return (
            ch >= 'a' && ch <= 'z' ||
            ch >= 'A' && ch <= 'Z' ||
            ch >= '0' && ch <= '9'
            );
    }

    bool isPalindrome(string s)
    {
        int l = 0;
        int r = s.length() - 1;

        while (l < r)
        {
            while (!isAlphaNum(s[l]))
            {
                if (++l >= r) return true;
            }

            while (!isAlphaNum(s[r]))
            {
                if (l >= --r) return true;
            }

            if (tolower(s[l]) != tolower(s[r])) return false;

            l++; r--;
        }

        return true;
    }
};
