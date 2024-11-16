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
    int n, i = 0;
public:
    TreeNode* helper(vector<int>& preorder, int value){
        
        if(i >= n || value < preorder[i]) return NULL;

        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = helper(preorder, root->val);
        root->right = helper(preorder, value);
        return root;

    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        n = preorder.size();
        return helper(preorder, INT_MAX);
    }
};