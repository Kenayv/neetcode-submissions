bool isAlphaNum(char ch)
{
	return(
		ch >= 'a' && ch <= 'z' ||
		ch >= 'A' && ch <= 'Z' ||
		ch >= '0' && ch <= '9'
		);
}

class Solution
{
public:
	bool isPalindrome(string s)
	{
		int l = 0;
		int r = s.size() - 1;

		while (l < r)
		{
			while (l < r && !isAlphaNum(s[l])) l++;
			while (l < r && !isAlphaNum(s[r])) r--;

			if(tolower(s[l]) != tolower(s[r])) return false;

			l++; 
			r--;
		}
		return true;
	}
};
