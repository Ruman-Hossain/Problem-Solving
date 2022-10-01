/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
typedef BinaryTreeNode<int>* pnode;

int getMaxDiff(pnode root, int maxUtil, int minUtil) {
    if (root == nullptr) {
        return 0;
}
    maxUtil = max(maxUtil, root->data);
    minUtil = min(minUtil, root->data);
    int diff = max(abs(maxUtil - root->data), abs(minUtil - root->data));
    int lchild = getMaxDiff(root->left, maxUtil, minUtil);
    int rchild = getMaxDiff(root->right, maxUtil, minUtil);
    return max(diff, max(lchild, rchild));
}

int maximumDifferenceNodeAndAncestor(BinaryTreeNode<int> *root)
{
    //Write your code here
    return getMaxDiff(root, -1, 1e8 + 1);
}