/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

public:
    int value = 0;
    int current = 0;
    bool done = 0;
    
    int kthSmallest(TreeNode* root, int k) {
        current = k;
        getKthSmallest(root);
        return value;
    }
    
    void getKthSmallest(TreeNode* root){
        
        if(root == NULL){return;}
        if(done){return;}
    
        getKthSmallest(root->left);
        --current;
        if(current == 0){value = root->val; done = 1; return;}
        getKthSmallest(root->right);
    }
};
