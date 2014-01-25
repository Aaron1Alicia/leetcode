class Solution {
	public:
	vector<string> letterCombinations(string digits)
	{
		
		vector<string> ret;
		ret.clear();

		string tmp;
		total=digits.length();

        dfs(ret,tmp,digits,0);

		return ret;
		
  } 
	void dfs(vector<string> &ret, string &tmp, string &digits,int size)
	{
		if(size==total)
		{
			ret.push_back(tmp);
			return;
		}

		//cout<<digits[size]<<endl;
		int num=digits[size]-'0';
		//printf("num=%d\n",num);

		for(size_t i=0;i<mp[num].length(); i++)
		{
		  tmp.push_back(mp[num][i]);
			dfs(ret,tmp,digits,size+1);
			tmp.pop_back();
		}
	}

	private:
		int total;
    string mp[10] = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
};
