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
    vector<int>postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        
        stack<pair<TreeNode *,int>> nws; // node with state
        
        if(nullptr!=root)
            nws.push({root,1});
        
        while(!nws.empty()){
            auto &current = nws.top(); // taken as reference
            if(1==current.second){
                current.second ++;
                if(nullptr!=current.first->left)
                    nws.push({current.first->left,1});
            }else if(2==current.second){
                current.second ++;
                if(nullptr!=current.first->right)
                    nws.push({current.first->right,1});
            }else{
                postorder.push_back(current.first->val);
                nws.pop();
            }
        }
        return postorder;
    }
};