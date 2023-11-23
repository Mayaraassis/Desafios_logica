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

    string ans = "";

    void pre(TreeNode* root)
    {
        if (root == nullptr) {
            return;
        }
        ans += to_string(root->val);
        if (root->left != nullptr || root->right != nullptr) {
            ans += "(";
            pre(root->left);
            ans += ")";
        }
        if (root->right != nullptr) {
            ans += "(";
            pre(root->right);
            ans += ")";
        }
    }

    string tree2str(TreeNode* root) {
        pre(root);
        return ans;
    }
};
