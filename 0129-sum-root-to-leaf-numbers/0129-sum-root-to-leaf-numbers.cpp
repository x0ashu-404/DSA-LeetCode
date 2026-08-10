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
    void fun(TreeNode* root , int &sum, int curr){
        if(root == NULL){
            return ;
        }

        curr = curr*10 + root->val;

        if(root->left == NULL and root->right == NULL){
            sum += curr;
            return ;
        }

        fun(root->left, sum, curr);
        fun(root->right, sum, curr);
        
    }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        int curr = 0;

        fun(root, sum, curr);

        return sum;
    }
};