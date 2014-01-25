class Solution {
	public:
	vector<string> restoreIpAddresses(string s) 
	{
		vector<string> ret;
		ret.clear();
		if(s.length()<4 || s.length()>12)
		return ret;

		string tmp;

    dfs(ret,tmp,s,0);

		return ret;
		
  } 
	void dfs(vector<string> &ret, string &tmp, string &s,int size)
	{
		if(size==3)
		{
			if(isValid(s))
			{
			 ret.push_back(tmp+s);
			}
			return;
		}

		for(size_t i=1;i<4&&i<s.length(); i++)
		{
			string cur=s.substr(0,i);
			if(isValid(cur))
			{
				string sub=s.substr(i);
				string tmp1=tmp+cur+'.';
			    dfs(ret,tmp1,sub,size+1);

			}
		}
	}

	bool isValid(string s)
	{
		if(s[0]=='0') return (s.compare("0")==0);
		int num=atoi(s.c_str());
		if(num<=255 && num>=0)
			return true;
		else
			return false;

	}
};
