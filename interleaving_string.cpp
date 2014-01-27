class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        
        int l1=s1.length();
		int l2=s2.length();
		int l3=s3.length();

		if(l1+l2!=l3)
			return false;

		vector<vector<bool> > dp;
		vector<bool> tmp;

		for(size_t i=0;i<=s1.length();i++)
		{
			tmp.push_back(false);
		}

		for(size_t j=0;j<=s2.length();j++)
		{
			dp.push_back(tmp);
		}

		dp[0][0]=true;

		for(size_t i=0;i<s1.length();i++)
		{
			if(s1[i]==s3[i])
			{
				dp[0][i+1]=dp[0][i];
			}
		}

		for(size_t j=0;j<s2.length();j++)
		{
			if(s2[j]==s3[j])
			{
				dp[j+1][0]=dp[j][0];
			}
		}

		for(int i=1;i<l2+1;i++)
			for(int j=1;j<l1+1;j++)
			{
				if(s1[j-1]==s3[i+j-1] && dp[i][j-1]==true)
				{
					dp[i][j]=true;
					continue;
				}

				if(s2[i-1]==s3[i+j-1] && dp[i-1][j]==true)
				{
					dp[i][j]=true;
				}
			}

		return dp[l2][l1];


    }
};
