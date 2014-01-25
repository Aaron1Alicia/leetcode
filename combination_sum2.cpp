class Solution {
	public:
  vector<vector<int> > combinationSum2(vector<int> &candidates, int target)
	{
    sort(candidates.begin(), candidates.end());
		
		vector<vector<int> > ret;
		ret.clear();

		vector<int> tmp;
		tmp.clear();

		bool* flag=new bool[candidates.size()];
		for(int i=0;i<candidates.size();i++)
		{
           flag[i]=false;
		}
		

		int sum=0;
		int idx=0;

    dfs(ret,tmp,candidates,flag,target, sum,idx);

		return ret;
		
  } 
	void dfs(vector<vector<int> > &ret, vector<int> &tmp, vector<int>& candidates, bool* flag, int &target, int &sum,int idx)
	{
		if(sum>=target)
		{
			if(sum==target)
			{
			  ret.push_back(tmp);
			}
			return;
		}

		for(int i=idx;i<candidates.size(); i++)
		{
			if(i!=0&&candidates[i]==candidates[i-1]&&flag[i-1]==false)
			{
				idx++;
				continue;
			}
			tmp.push_back(candidates[i]);
			flag[i]=true;
			sum+=candidates[i];
			dfs(ret,tmp,candidates,flag,target,sum,idx+1);
			tmp.pop_back();
			flag[i]=false;
			sum-=candidates[i];
			idx++;
		}
	}
  
};
