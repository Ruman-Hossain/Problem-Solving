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
    // RECURSIVE SOLUTION
//     vector<int>result;
    
//     void dfs(TreeNode* root){
//         if(root == nullptr)
//             return;
//         dfs(root->left);
//         result.push_back(root->val);
//         dfs(root->right);
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         dfs(root);
//         return result;
//     }

    // ITERATIVE SOLUTION USING STACK
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>store;
        vector<int>result;
        while(root != nullptr or !store.empty()){
            while(root != nullptr){
                store.push(root);
                root = root->left;
            }
            root = store.top();
            store.pop();
            result.push_back(root->val);
            root = root->right;

        }

        return result;
    }
};