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
    int result=0;
    int depthRecurse(TreeNode* root, int depth){
        if(root == nullptr)
            return 0;
        result = max(result,depth);
        depthRecurse(root->left, depth+1);
        depthRecurse(root->right, depth+1);
        return result+1;
    }
    int maxDepth(TreeNode* root) {
        return depthRecurse(root,0);
    }
};