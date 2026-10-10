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
    int kthSmallest(TreeNode* root, int k) {
        int min;
        check(root,k,min);
        return min;
    }

    void check(TreeNode* root, int& k,int& min){
        if(!root){
            return;
        }
        if(k>0){
            check(root->left,k,min);
        }if(k>0){
            updatemin(root,k,min); 
        }if(k>0){
            check(root->right,k,min);        
        }
    
    }

    void updatemin(TreeNode* root,int& k, int& min){
        min=root->val;
        k--;
    }
};
