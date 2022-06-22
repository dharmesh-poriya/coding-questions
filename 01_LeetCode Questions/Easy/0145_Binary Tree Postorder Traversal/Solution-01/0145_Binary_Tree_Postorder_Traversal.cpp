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
    vector<int> postorderTraversal(TreeNode* root) {
        if(nullptr==root) return {};
        
        vector<int> left;
        left = postorderTraversal(root->left);
        
        for(int val : postorderTraversal(root->right)) left.push_back(val);
        
        left.push_back(root->val);
        return left;
    }
};