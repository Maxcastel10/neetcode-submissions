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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> r;
        if(root){
            q.push(root);
        }
        while(q.size()){
            vector<int> temp;
            queue<TreeNode*> tv;
            while(q.size()){
                tv.push(q.front());
                temp.push_back(q.front()->val);
                q.pop();
            }
            r.push_back(temp);
            while(tv.size()){
                if(tv.front()->left){
                    q.push(tv.front()->left);
                }
                if(tv.front()->right){
                    q.push(tv.front()->right);
                }
                tv.pop();
            }
        }
        return r;
    }
};
