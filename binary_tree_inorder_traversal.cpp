/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
vector<int> ret;
public:
    vector<int> inorderTraversal(TreeNode *root) {
       vector<int> ret;
			 if(!root)
				 return ret;

			 TreeNode* cur=NULL;
			 stack<TreeNode* > tmp;
			 tmp.push(root);
			 bool flag=true;

			 while(!tmp.empty())
			 {
				 while(flag && tmp.top()->left)
					 tmp.push(tmp.top()->left);

				 cur=tmp.top();
				 ret.push_back(cur->val);
				 tmp.pop();
				 flag=false;
				 if(cur->right)
				 {
					 //ret.push_back(cur->right)
					 tmp.push(cur->right);
					 flag=true;
				 }
			 }

			 return ret;

    }

};
