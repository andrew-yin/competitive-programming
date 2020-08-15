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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int, map<int, set<int>>> n;

        dfs(0, 0, n, root);

        for (auto i: n) {
            vector<int> a;
            for (auto j: i.second) {
                a.insert(a.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(a);
        }

        return ans;
    }

private:
    void dfs(int x, int y, map<int, map<int, set<int>>> &n, TreeNode* node) {
        if (node != nullptr) {
            n[x][y].insert(node->val);
            dfs(x-1, y+1, n, node->left);
            dfs(x+1, y+1, n, node->right);
        }
    }
};
