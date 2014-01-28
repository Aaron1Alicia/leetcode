class Solution {

public: 
	int isPalindrome(string s) {

		   int length=s.length();

			 bool dp[length][length];

			 for(int i=0;i<length;i++)
         for(int j=i;j<length;j++)
				 {
					 if(j==i)
						 dp[i][j]=true;
					 else
						 dp[i][j]=false;
				 }

			 for(int i=1;i<length;i++)
				 for(int j=0;j<i;j++)
				 {
					 if(s[j]==s[i])
					 {
						 if(i-j<2)
							 dp[j][i]=true;
						 else
							 dp[j][i]=dp[j+1][i-1];
					 }
						 

				 }

			 return dp[0][length-1];
				  

		 
        
    }

			

};

