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
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }

    bool check(TreeNode *Lnode, TreeNode *Rnode) {
        if(Lnode == 0 && Rnode == 0)
            return true;
        else if(Lnode == 0 || Rnode == 0)
            return false;
        else if(Lnode->val != Rnode->val)
            return false;

        return (check(Lnode->left, Rnode->right) && check(Lnode->right, Rnode->left));
    }
};