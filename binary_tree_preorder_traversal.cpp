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
    vector<int> preorderTraversal(TreeNode *root) {
       vector<int> ret;
			 if(!root)
				 return ret;

			 TreeNode* cur=NULL;
			 stack<TreeNode* > tmp;
			 tmp.push(root);

			 while(!tmp.empty())
			 {
				 cur=tmp.top();
				 ret.push_back(cur->val);
				 tmp.pop();
				 if(cur->right)
					 tmp.push(cur->right);
				 if(cur->left)
					 tmp.push(cur->left);
			 }

			 return ret;

    }

};
