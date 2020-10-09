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
    int sum = 0;
    void dfs(TreeNode *root,int d){
        if(root == NULL) return;
        if(d == 1 && root->left == NULL && root->right == NULL)
            sum+=root->val;
        dfs(root->left,1);
        dfs(root->right,-1);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;
        dfs(root,0);
        return sum;
    }
};
