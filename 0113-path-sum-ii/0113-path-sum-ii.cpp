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
    void preorder(TreeNode* root, vector<int>& path, int sum, int target,
                  vector<vector<int>>& ans) {
        if (root == NULL)
            return;
        sum += root->val;
        path.push_back(root->val);
        if (root->left == NULL && root->right == NULL) {
            if (sum == target) {
                ans.push_back(path);
            }
            path.pop_back();
            return;
        }
        preorder(root->left, path, sum, target, ans);
        preorder(root->right, path, sum, target, ans);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        preorder(root, path, 0, targetSum, ans);
        return ans;
    }
};