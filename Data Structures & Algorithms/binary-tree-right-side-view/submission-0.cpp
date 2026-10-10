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
    vector<int> rightSideView(TreeNode* root) {
        if(!root){
            return vector<int>();
        }
        queue<TreeNode*> q;
        vector<int> ans;
        q.push(root);
        while(q.size()){
            queue<TreeNode*> tq;
            while(q.size()){
                tq.push(q.front());
                q.pop();
            }
            ans.push_back(tq.front()->val);
            while(tq.size()){
                if(tq.front()->right){
                    q.push(tq.front()->right);
                }
                if(tq.front()->left){
                    q.push(tq.front()->left);
                }
                tq.pop();
            }
        }
        return ans;
    }
};
