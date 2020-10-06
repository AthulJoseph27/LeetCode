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
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        auto head = root;
        if(root == NULL){
            root = new TreeNode(val);
            return root;
        }
        while(root != NULL){
            if(root->left == NULL && root->val > val){
                root->left = new TreeNode(val);
                return head;
            }
            if(root->right == NULL && root->val < val){
                root->right = new TreeNode(val);
                return head;
            }
            if(root->val > val){
                root = root->left;
            }else{
                root = root->right;
            }
        }
        return head;
    }
};
