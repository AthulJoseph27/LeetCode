/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    bool isValidBST(TreeNode* root,long left, long right){
        if(root == NULL)
            return true;
        
        return (root->val > left && root->val < right) 
                    && 
                isValidBST(root->left,left,root->val)
                    &&
                isValidBST(root->right,root->val,right);     
    }
public:
    bool isValidBST(TreeNode* root) {
      return isValidBST(root,((long)INT_MIN)-10,((long)INT_MAX)+10);
    }
};
