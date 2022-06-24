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
    void helper(TreeNode* root,string asf,vector<string> &ans){
        if(nullptr==root){
            return;
        }
        
        if(nullptr==root->left && nullptr==root->right){
            ans.push_back(asf+to_string(root->val));
            return;
        }
        
        helper(root->left,asf+to_string(root->val)+"->",ans);
        helper(root->right,asf+to_string(root->val)+"->",ans);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root,"",ans);
        return ans;
    }
};