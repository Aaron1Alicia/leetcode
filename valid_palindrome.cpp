class Solution {
public:
    bool isPalindrome(string s) {
			int l=0;
			int r=s.length()-1;

			while(l<=r)
			{
				while(l<=r&&!isalphanumeric(s[l]))
					l++;
				while(r>=l&&!isalphanumeric(s[r]))
					r--;

				if(l<=r&&s[l]!=s[r])
					return false;

				r--;
				l++;
			}

			return true;

    }

		bool isalphanumeric(char &ch)
		{

			if(ch>='0'&&ch<='9')
			{
				return true;
			}
			else if(ch>='a'&&ch<='z')
			{
				return true;
			}
			else if(ch>='A'&&ch<='Z')
			{
				ch+=32;
				return true;
			}
			else
				return false;

		}


};
