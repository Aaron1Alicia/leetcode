class Solution {
public:
   int minCut(string s) {

		 int length=s.length();

		 int dp[length+1];
		 bool palindrome[length][length];

		 //vector<vector<int> > palindrome;
		 //vector<int> tmp;
		 for(int i=0;i<length+1;i++)
		 {
			 dp[i]=length-i;
		 }

		 for(int i=0;i<length;i++)
			 for(int j=0;j<length;j++)
			 {
				 palindrome[i][j]=false;
			 }

		 for(int i=length-1;i>=0;i--)
			 for(int j=i;j<length;j++)
			 {
				 if(s[i]==s[j] && ((j-i<2) || palindrome[i+1][j-1]==true))
				 {
					 palindrome[i][j]=true;
					 dp[i]=min(dp[i],1+dp[j+1]);
				 }
			 }

		 return dp[0]-1;
      

        
    }
};
