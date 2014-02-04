class Solution {
public:
       int maxProfit(vector<int> &prices) {

         if (prices.size() == 0)
            return 0;
        int cnt = prices[0];
        int ans = -0x7ffffff;

				int size=prices.size();
				int* left=new int[size];
				int* right=new int[size];
        for (int i = 0; i < size; i++) {
            ans = max(ans, prices[i] - cnt);
            cnt = min(cnt, prices[i]);
						left[i]=ans;
        }
        
				cnt= prices[size-1];
        ans = -0x7ffffff;
				

        for (int i = size-1; i>=0 ; i--) {
            ans = max(ans, cnt-prices[i]);
            cnt = max(cnt, prices[i]);
						right[i]=ans;
        }

        ans = -0x7ffffff;
				for(int i=0;i<size;i++)
				{
					ans=max(ans,left[i]+right[i]);
				}

        return ans;
			
        
    }
};
