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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL){
            return {};
        }

        int cnt = 0;
        vector<vector<int>> ans;
        vector<int> curr;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* tmp = q.front();
            q.pop();

            if(tmp == NULL){
                if(cnt%2 != 0){
                    reverse(curr.begin(), curr.end());
                    ans.push_back(curr);
                }else{
                    ans.push_back(curr);
                }
                
                curr.clear();
                cnt++;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                curr.push_back(tmp->val);
                if(tmp->left){
                    q.push(tmp->left);
                }

                if(tmp->right){
                    q.push(tmp->right);
                }
            }
        }
        return ans;
    }
};