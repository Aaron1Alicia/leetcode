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
  bool isSymmetric(TreeNode *root) {
		 if(root==NULL)
			 return true;

		 bool is_symmetric=isSameTree(root->left, root->right);

		 return is_symmetric;
        
    }

    bool isSameTree(TreeNode *p, TreeNode *q) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (p == NULL || q == NULL) {
            if (p == NULL && q == NULL) {
                return true;
            }
            return false;
        }
        if (p->val != q->val) {
            return false;
        }
        return isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
    }
};
