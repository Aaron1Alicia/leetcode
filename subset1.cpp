class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {

             sort(S.begin(),S.end());
			 vector<vector<int> > ret;
			 ret.clear();
			 vector<int> tuple;
			 tuple.clear();
			 dfs(ret,0,S.size(),tuple,S); 
			 return ret;
    }

		 void dfs(vector<vector<int> > &ret,int cnt, int total, vector<int> tuple, vector<int> &S){
			 if(cnt==total)
			 {
				 ret.push_back(tuple);
			 }
			 else
			 {
				 dfs(ret,cnt+1,total,tuple,S);
				 tuple.push_back(S[cnt]);
				 dfs(ret,cnt+1,total,tuple,S); 
			 }
		 }

};
