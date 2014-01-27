class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {

			int n=triangle.size();
			if(n==0)
				return 0;

			int* dp=new int[n];

			for(size_t i=0;i<triangle.size();i++)
				dp[i]=triangle[n-1][i];

			for(int i=n-2;i>=0;i--)
				for(size_t j=0;j<triangle[i].size();j++)
				{
					if(dp[j]>dp[j+1])
						dp[j]=dp[j+1]+triangle[i][j];
					else
						dp[j]=dp[j]+triangle[i][j];
				}
			
			//delete dp;
			int ret=dp[0];
			delete dp;


			return ret;
              
    }
};
