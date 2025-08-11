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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> out;
        dfs(root, out);
        return out;
    }
    void dfs(TreeNode* n, vector<int>& out){
        if (!n) return;
        out.push_back(n->val);
        dfs(n->left, out);
        dfs(n->right, out);
    }
};