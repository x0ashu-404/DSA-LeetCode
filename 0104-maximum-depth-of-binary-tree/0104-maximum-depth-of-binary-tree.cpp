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
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        int cnt = 0;
        while(!q.empty()){
            TreeNode* tmp = q.front();
            q.pop();

            if(tmp == NULL){
                cnt++;
                
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                if(tmp->left){
                    q.push(tmp->left);
                }

                if(tmp->right){
                    q.push(tmp->right);
                }
            }
        }
        return cnt;
    }
};