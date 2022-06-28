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
private:
    int mn = INT_MAX;
    TreeNode *prev = NULL;
    void helper(TreeNode *root){
        if(nullptr==root) return;
        
        helper(root->left);
        if(nullptr!=prev){
            mn = min(mn,root->val - prev->val);
        }
        prev = root;
        helper(root->right);
    }
public:
    int minDiffInBST(TreeNode* root) {
        mn = INT_MAX;
        helper(root);
        return mn;
    }
};