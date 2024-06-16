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
    int helper(TreeNode* root,int &sum){
        if(root==nullptr) return 0;

        int leftMax = max(0,helper(root->left,sum));
        int rightMax = max(0,helper(root->right,sum));

        int curr = root->val;
        
        sum = max(sum, leftMax+rightMax+curr);
        return max(leftMax, rightMax) + curr;
    }
    int maxPathSum(TreeNode* root) {
       int sum = INT_MIN;
        helper(root,sum);
        return sum;
    }
};