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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root){
            return nullptr;
        }
        TreeNode* a = lowestCommonAncestor(root->left,p,q);
        TreeNode* b = lowestCommonAncestor(root->right,p,q);
        if((a==p && b==q)||(a==q && b==p)){
            return root;
        }
        if(root==q || root==p){
            return root;
        }
        return !a?b:a;
    }

};
