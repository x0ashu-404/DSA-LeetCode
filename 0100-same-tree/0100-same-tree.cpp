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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL and q == NULL){
            return true;
        }   

        if(p == NULL or q == NULL){
            return false;
        }

        queue<TreeNode*> pq;
        queue<TreeNode*> qq;

        pq.push(p);
        qq.push(q);

        while(!pq.empty() and !qq.empty()){
            TreeNode* ptemp = pq.front();
            TreeNode* qtemp = qq.front();
            pq.pop();
            qq.pop();

            // if both are null
            if(ptemp == NULL and qtemp == NULL){
                continue;
            }
            //if one is null
            else if(ptemp == NULL or qtemp == NULL){
                return false;
            }
            else{
                if(ptemp->val != qtemp->val){
                    return false;
                }

                pq.push(ptemp->left);
                pq.push(ptemp->right);
                qq.push(qtemp->left);
                qq.push(qtemp->right);
            }
        }

        return true;
    }
};