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

    void dfs(TreeNode *node, int depth, std::map<int, long long> &counts, std::map<int, long long> &tv){
        if(!node){return;}
        ++counts[depth];
        tv[depth] += node->val;
        dfs(node->left, depth + 1, counts, tv);
        dfs(node->right, depth + 1, counts, tv);
    }

    vector<double> averageOfLevels(TreeNode* root) {

        std::map<int, long long> cnt, val;
        dfs(root, 0, cnt, val);

        std::vector<double> v;
        for(long p = 0; cnt.count(p); p++){v.push_back(1.0 * val[p] / cnt[p]);}
        return v;
    }
};
