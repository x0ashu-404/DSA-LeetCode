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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL){
            return {};
        }

        vector<double> ans;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        long long sum = 0;
        int cnt = 0;

        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();

            if(temp != NULL){
                sum += temp->val;
                cnt++;
                if(temp->left){
                    q.push(temp->left);
                }

                if(temp->right){
                    q.push(temp->right);
                }
            }else{
                double avg = double(sum) / cnt;
                ans.push_back(avg);
                sum = 0;
                cnt = 0;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
        }

        return ans;
    }
};