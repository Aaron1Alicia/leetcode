class Solution {
public:
   		 vector<vector<int> > subsetsWithDup(vector<int> &S) {

			 sort(S.begin(), S.end());
			 vector<vector<int> > ret;
			 ret.clear();
			 vector<int> tuple;
			 tuple.clear();
			 dfs(ret,0,S.size(),tuple,S,true); 
			 return ret;
    }

		 void dfs(vector<vector<int> > &ret,int cnt, int total, vector<int> tuple, vector<int> &S, bool lastchose){
			 if(cnt==total)
			 {
				 ret.push_back(tuple);
			 }
			 else
			 {
				 dfs(ret,cnt+1,total,tuple,S,false);
				 
				 if(cnt!=0&&S[cnt]==S[cnt-1]&&!lastchose)
				 {
					 return;
				 }
				 tuple.push_back(S[cnt]);
				 dfs(ret,cnt+1,total,tuple,S,true); 
			 }

		 }
};
