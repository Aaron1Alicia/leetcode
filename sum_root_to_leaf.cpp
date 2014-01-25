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
	private:
		int total;
public:
    int sumNumbers(TreeNode *root) {

			//total=0;
			if(root==NULL)
			return 0;
			total=0;
			dfs(root,0);
			return total;
        
    }

		void dfs(TreeNode* node, int sum)
		{
			sum=sum*10+node->val;
			if(node->left==NULL &&  node->right==NULL)
			{
				total+=sum;
				return;
			}


			if(node->left!=NULL)
				dfs(node->left, sum);
        
			if(node->right!=NULL)
				dfs(node->right, sum);

		}
};
