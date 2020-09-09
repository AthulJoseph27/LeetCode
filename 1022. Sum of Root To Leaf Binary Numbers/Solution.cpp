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
    vector<string>paths={};
    void getPath(TreeNode* root, string s){
        if(root == NULL) return;
        if((root->left == nullptr) && (root->right == nullptr)){
            paths.push_back(s+to_string(root->val));
            return;
        }
        getPath(root->left,s+to_string(root->val));
        getPath(root->right,s+to_string(root->val));
    }
    int binTOdec(string s){
        int n = s.size()-1,num=0;
        for(int i=n;i>=0;i--)
            if(s[i]=='1') num+=pow(2,n-i);
        
        return num;
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        getPath(root,"");
        
        int sum=0;
        
        for(string s:paths)
            sum+=binTOdec(s);
        
        return sum;
    }
};
