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
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        bool isbalanced = true;
        int call=height(root,isbalanced);
        return isbalanced;
    }
    int height(TreeNode* root,bool& isbalanced){
        if(!root){
            return 0;
        }
        int left = height(root->left,isbalanced);
        int right = height(root->right,isbalanced);
        if(!(abs(left-right)<=1)){
            isbalanced = false;
        }
        return 1 + max(left,right);
    }
};
