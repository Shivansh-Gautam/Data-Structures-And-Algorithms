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
    int minVal(TreeNode* root) {
  TreeNode* temp = root;
  if (temp == NULL) {
    return 0;
  }
  while (temp->left != NULL) {
    temp = temp->left;
  }
  return temp->val;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){
            return NULL;
        }
        if(root->val==key){
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            if(root->left!=NULL && root->right==NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            if(root->left==NULL && root->right!=NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            if(root->left!=NULL && root->right!=NULL){
                int mini = minVal(root->right);
                root->val = mini;
                root->right = deleteNode(root->right,mini);
                return root;
            }
        }
        else if(root->val < key){
            root->right = deleteNode(root->right,key);

        }
        else if(root->val > key){
            root->left = deleteNode(root->left,key);
        }
        return root;
    }
};