class Solution {
	public:
		 int global_n;
		 int global_k;
   vector<vector<int> > combine(int n, int k) {

      vector<vector<int> > ret;
			vector<int> tmp;
			tmp.clear();
			ret.clear();

			global_k=k;
			global_n=n;

			dfs(ret,tmp,0,0);

			return ret;

    }

	void dfs(vector<vector<int> > &ret, vector<int> tmp, int cnt, int idx)
	{
		if(cnt==global_k)
		{
			ret.push_back(tmp);
			return;
		}

		for(int i=idx;idx< global_n; i++)
		{
			tmp.push_back(i+1);
			idx++;
			dfs(ret,tmp,cnt+1,idx);
			tmp.pop_back();
		}
	}
};
