class Solution {

public:
    int numDecodings(string s) {

			int len=s.length();
			if(len==0)
				return 0;

			int dp[len];

			for(int i=0;i<len;i++)
			{
				dp[i]=0;
			}

			if(isValid(s.substr(0,1)))
			{
				dp[0]=1;
			}

			if(isValid(s.substr(1,1)))
			{
				dp[1]=dp[0];
			}
			if(isValid(s.substr(0,2)))
			{
				dp[1]+=1;
			}

			for(int i=2;i<len;i++)
			{
				if(isValid(s.substr(i,1)))
					dp[i]=dp[i-1];
				if(isValid(s.substr(i-1,2)))
					dp[i]+=dp[i-2];
			}

			return dp[len-1];
        
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






