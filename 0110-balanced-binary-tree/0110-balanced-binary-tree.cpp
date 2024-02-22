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
class Solution{
    public:
    
    //Function to check whether a binary tree is balanced or not.
    pair<bool,int> isBalancedFast(TreeNode *root){
        if(!root){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        
        pair<bool,int> leftAns = isBalancedFast(root->left);
        pair<bool,int> rightAns = isBalancedFast(root->right);
        
        bool left = leftAns.first;
        bool right = rightAns.first;
        
        bool diff = abs(leftAns.second - rightAns.second) <= 1;
        
        pair<bool,int> ans;
        ans.second = max(leftAns.second,rightAns.second) + 1;
        
        if(left && right && diff){
            ans.first = true;
        }
        else{
            ans.first = false;
        }
        return ans;
    }
    
    bool isBalanced(TreeNode *root)
    {
        //  Your Code here
        return isBalancedFast(root).first;
    }
};