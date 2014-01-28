/* right answer, but too slow*/

class Solution {
	  int num;
public:
    int numDecodings(string s) {

			int len=s.length();
			if(len==0)
				return 0;
			num=0;
			dfs(s);

			return num;

        
    }

		void dfs(string s)
		{
			if(s.length()==0)
				num++;

			for(int i=0;i<2&&i<s.length();i++)
			{
				if(isValid(s.substr(0,i+1)))
					dfs(s.substr(i+1));
			}
		}

		bool isValid(string s)
		{
			if(s[0]=='0')
				return false;
			if(atoi(s.c_str())>=1 && atoi(s.c_str())<=26)
			{
				return true;
			}
			else
				return false;
		}
};
