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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode *> q;
        
        if(nullptr!=root)
            q.push(root);
        while(!q.empty()){
            TreeNode *current = q.front();
            q.pop();
            swap(current->left,current->right);
            if(nullptr!=current->left)
                q.push(current->left);
        
            if(nullptr!=current->right)
                 q.push(current->right);
        }
        return root;
    }
};