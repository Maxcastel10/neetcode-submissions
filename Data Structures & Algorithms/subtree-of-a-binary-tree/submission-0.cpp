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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && ! subRoot){
            return true;
        }
        if(!root){
            return false;
        }
        if(isSameTree(root,subRoot)){
            return true;
        }else if(isSubtree(root->left,subRoot)){
            return true;
        }else{
            return isSubtree(root->right,subRoot);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q){
            return true;
        }
        if((p && !q)||(q && !p)){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
        bool issame = true;
        if(!(isSameTree(p->left,q->left))){
            return false;
        }
        if(!(isSameTree(p->right,q->right))){
            return false;
        }
        return true;
    }
};
