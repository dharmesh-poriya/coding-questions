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
        if(nullptr==root) return {};
        
        vector<int> left,right;
        left.push_back(root->val);
        
        for(int val : preorderTraversal(root->left)){
            left.push_back(val);
        }
        right = preorderTraversal(root->right);
        
        for(int val : right) left.push_back(val);
        
        return left;
    }
};