class Solution {
public:
    vector<vector<string> > partition(string s) {
			vector<vector<string> > ret;
			ret.clear();

			vector<string> tmp;
			tmp.clear();

			dfs(ret,tmp,s);

			return ret;
        
    }

		void dfs(vector<vector<string> > &ret, vector<string> &tmp,string s) 
		{
		    if(s.length()==0)
				{
					ret.push_back(tmp);
					return;
				}

				for(size_t i=1;i<=s.length();i++)
				{
					string substr=s.substr(0,i);
					if(isValid(substr))
					{
						tmp.push_back(substr);
						dfs(ret,tmp,s.substr(i));
						tmp.pop_back();
					}

				}


		}

		bool isValid(string s)
		{
			int l=0;
			int r=s.length()-1;

			while(l<r)
			{
				if(s[l++]!=s[r--])
					return false;
			}

			return true;
			
		}
};
