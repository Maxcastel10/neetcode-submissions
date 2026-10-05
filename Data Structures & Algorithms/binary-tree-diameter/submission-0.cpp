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
    int maxheight=0;
    int diameterOfBinaryTree(TreeNode* root) {
        calculateHeight(root);
        return maxheight;
    }
    int calculateHeight(TreeNode* root){
        if(!root){
            return 0;
        }
        int heightl = calculateHeight(root->left);
        int heightr = calculateHeight(root->right);
        maxheight=max(maxheight,heightl+heightr);
        return 1+max(heightl,heightr);
    }
};
