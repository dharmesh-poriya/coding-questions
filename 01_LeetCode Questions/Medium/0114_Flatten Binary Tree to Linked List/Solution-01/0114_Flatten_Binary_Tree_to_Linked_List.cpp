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
    // right left root
    void flatten(TreeNode* root) {
        stack<TreeNode *> st;
        if(nullptr!=root)
            st.push(root);
        
        while(!st.empty()){
            TreeNode *current = st.top();
            st.pop();
            
            if(nullptr!=current->right)
                st.push(current->right);
            if(nullptr!=current->left)
                st.push(current->left);
            
            if(!st.empty())
                current->right = st.top();
            current->left = nullptr;
        }
    }
};