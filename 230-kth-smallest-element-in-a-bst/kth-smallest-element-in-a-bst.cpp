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
    void helper(TreeNode* root, int k, int  &counter, int &ans){
        if(!root || counter >= k) return;

        helper(root->left, k, counter, ans);
        counter++;

        if(counter == k) ans = root->val;

        helper(root->right, k, counter, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        int counter = 0;
        int ans = INT_MAX;

        helper(root,k,counter,ans);
        return ans;
    }
};