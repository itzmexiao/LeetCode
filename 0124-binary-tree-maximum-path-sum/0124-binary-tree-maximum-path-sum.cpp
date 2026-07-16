class Solution {
public:
    int ans = INT_MIN;
    int helper(TreeNode* node) {
        if (node == NULL)
            return 0;
        int leftSum = max(0, helper(node->left));
        int rightSum = max(0, helper(node->right));
        ans = max(ans, leftSum + rightSum + node->val);
        return max(leftSum, rightSum) + node->val;
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
    }
};