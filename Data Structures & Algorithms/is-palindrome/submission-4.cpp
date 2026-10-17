
class Solution 
{
public:
    bool isAlphaNum(char& ch)
    {
        return(
            ch >= 'a' && ch <= 'z' ||
            ch >= 'A' && ch <= 'Z' ||
            ch >= '0' && ch <= '9'
            );
    }

    bool isPalindrome(string s)
    {
        int l = 0;
        int r = s.size() - 1;

        while (l < r)
        {
            while (l < r && !isAlphaNum(s[l])) l++;
            while (l < r && !isAlphaNum(s[r])) r--;

            std::cout << l << ' ' << r << '\n';
            std::cout << s[l] << ' ' << s[r] << '\n';

            if (tolower(s[l]) != tolower(s[r])) return false;

            r--;
            l++;
        }

        return true;
    }
};
