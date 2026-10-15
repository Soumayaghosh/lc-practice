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
    int maxDiff;
    void maxDiffUtil(TreeNode* root,TreeNode* child){
        if(root ==NULL || child==NULL) return;
        maxDiff=max(maxDiff,abs(root->val-child->val));
        maxDiffUtil(root,child->left);
        maxDiffUtil(root,child->right);
    }
    void findMax(TreeNode* root){
        if(root==NULL) return;
        maxDiffUtil(root,root->left);
        maxDiffUtil(root,root->right);
        findMax(root->left);
        findMax(root->right);
    }
    int maxAncestorDiff(TreeNode* root) {
        maxDiff=-1;
        findMax(root);
        return maxDiff;
    }
};