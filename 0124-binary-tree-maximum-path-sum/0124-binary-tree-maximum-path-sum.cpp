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
    int best = INT_MIN;
    int solve(TreeNode* node){
        if(!node)
            return 0;
        int l = max(0,solve(node->left));
        int r = max(0,solve(node->right));
        best = max(best, node->val+l+r);
        return node->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return best;
    }
};