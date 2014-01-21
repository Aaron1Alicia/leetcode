class Solution {
public:
   vector<string> generateParenthesis(int n) {

			string s;
			vector<string> ret1;
			vector<string> ret=generateParenthesis(n,n,s,ret1);
			return ret;
    }

		vector<string> generateParenthesis(int left_sum, int right_sum, string s, vector<string> &ret) {
			if(left_sum==0&&right_sum==0)
			{
				ret.push_back(s);
			}
			if(left_sum>0)
			{
				generateParenthesis(left_sum-1, right_sum, s+'(',ret);
			}
			if(right_sum > left_sum)
			{
				generateParenthesis(left_sum, right_sum-1, s+')',ret);
			}

			return ret;
		}
};
