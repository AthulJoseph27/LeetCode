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
    void inorder(TreeNode* root,vector<int>&v){
        if(root == NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL) return {};
        vector<int>f = {};
        vector<int> s = {};
        vector<int>ans = {};
        inorder(root1,f);
        inorder(root2,s);
        int i=0,j=0,n = f.size(), m = s.size();
        while(i<n && j<m){
            if(f[i]<s[j]){
                ans.push_back(f[i]);
                i++;
            }else{
                ans.push_back(s[j]);
                j++;
            }
            
        }
        while(i<n){
             ans.push_back(f[i]);
                i++;
        }
         while(j<m){
             ans.push_back(s[j]);
                j++;
        }
        return ans;
    }
};
