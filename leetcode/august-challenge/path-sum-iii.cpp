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
    int pathSum(TreeNode* root, int sum) {
        int ans = 0;
        dfs1(root, sum, ans);
        return ans;
    }

private:
    void dfs1(TreeNode* root, int& sum, int& ans) {
        if (root) {
            int subSum = 0;
            dfs2(root, sum, ans, subSum);
            dfs1(root->left, sum, ans);
            dfs1(root->right, sum, ans);
        }
    }

    void dfs2(TreeNode* root, int& sum, int& ans, int subSum) {
        if (root) {
            subSum += root->val;
            if (subSum == sum) {
                ans++;
            }
            dfs2(root->left, sum, ans, subSum);
            dfs2(root->right, sum,ans, subSum);
        }
    }
}; 
