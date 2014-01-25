class Solution {
	public:
  vector<vector<int> > combinationSum(vector<int> &candidates, int target)
	{
    sort(candidates.begin(), candidates.end());
		
		vector<vector<int> > ret;
		ret.clear();

		vector<int> tmp;
		tmp.clear();

		int sum=0;
		int idx=0;

    dfs(ret,tmp,candidates,target, sum,idx);

		return ret;
		
  } 
	void dfs(vector<vector<int> > &ret, vector<int> &tmp, vector<int>& candidates, int &target, int &sum,int idx)
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
			tmp.push_back(candidates[i]);
			sum+=candidates[i];
			dfs(ret,tmp,candidates,target,sum,idx);
			tmp.pop_back();
			sum-=candidates[i];
			idx++;
		}
	}
};
