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
    bool mirrorCheck(TreeNode* left, TreeNode* right){
        if(left == nullptr && right == nullptr)
            return true;
        if(left == nullptr or right == nullptr)
            return false;
        return left->val ==right->val
            and mirrorCheck(left->left, right->right)
            and mirrorCheck(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        return mirrorCheck(root->left, root->right);
    }
};