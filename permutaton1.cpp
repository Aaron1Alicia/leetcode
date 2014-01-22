class Solution {
	public:
	vector<vector<int> > permute(vector<int> &num) {
            vector<vector<int> > ret;
			vector<int> tmp;
			tmp.clear();
			ret.clear();

			bool* flag=new bool(num.size());
			sort(num.begin(), num.end());

			for(int i=0;i<num.size();i++)
			{
				flag[i]=false;
			}

			dfs(ret,num,tmp,flag,0);

			return ret;

    }

	void dfs(vector<vector<int> > &ret, vector<int> &num, vector<int> tmp, bool* flag, int cnt)
	{
		if(cnt==num.size())
		{
			ret.push_back(tmp);
			return;
		}

		for(int i=0;i<num.size();i++)
		{
			if(flag[i]==true)
				continue;
			else
			{
			  flag[i]=true;
			  tmp.push_back(num[i]);
			  dfs(ret,num,tmp,flag,cnt+1);
			  tmp.pop_back();
			  flag[i]=false;
			}
		}

	}

};
