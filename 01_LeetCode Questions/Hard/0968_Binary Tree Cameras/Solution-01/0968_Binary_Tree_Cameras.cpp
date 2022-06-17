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
    int cameras;
    int isCameraNeeded(TreeNode* root){
        if(nullptr==root) return 1;
        
        int left = isCameraNeeded(root->left);
        int right = isCameraNeeded(root->right);
        
        if(-1==left || -1==right){
            cameras ++;
            return 0;
        }
        if(0==left || 0==right){
            return 1;
        }
        return -1;
    }
public:
    int minCameraCover(TreeNode* root) {
        this->cameras = 0;
        
        if(isCameraNeeded(root)==-1) cameras ++;
        
        return cameras;
    }
};