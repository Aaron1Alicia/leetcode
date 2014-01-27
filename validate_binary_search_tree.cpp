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
public:
	 bool isValidBST(TreeNode *root) {

		 if(root==NULL)
			 return true;
		 else
			 return dfs(root, INT_MIN, INT_MAX);

    }


    bool dfs(TreeNode *root, int low_bound, int high_bound) {

			   if(root->val<=low_bound || root->val>=high_bound)
					 return false;

				 if(root->left!=NULL)
				 {
					 if(!dfs(root->left,low_bound,root->val))
						 return false;
				 }

				 if(root->right!=NULL)
				 {
					 if(!dfs(root->right,root->val,high_bound))
						 return false;
				 }

				 return true;

    }

};
