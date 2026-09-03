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
    vector<int>v;
    void output(TreeNode* root){
        if(root == nullptr)return;
        v.push_back(root->val);
        output(root->left);
        output(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        output(root);
        return v;
    }
};