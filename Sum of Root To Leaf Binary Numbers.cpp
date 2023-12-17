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
void helper(TreeNode* root, int val, int& res){
    if(!root) return;

    val = val | root->val;
    if(!root->left && !root->right){
        res+=val;
        return;
    }
    helper(root->left,  val<<1, res);
    helper(root->right, val<<1, res);
}
void helper1(TreeNode* root,  int out, int& res){
    if(!root) return;

    out = (out<<1) + root->val;
    if(!root->left && !root->right){
        res+=out;
        return;
    }
    helper1(root->left,out,res);
    helper1(root->right,out,res);
}
int sumRootToLeaf(TreeNode* root) {
        int res = 0;
        helper1(root,0,res);
        return res;    
}
};
