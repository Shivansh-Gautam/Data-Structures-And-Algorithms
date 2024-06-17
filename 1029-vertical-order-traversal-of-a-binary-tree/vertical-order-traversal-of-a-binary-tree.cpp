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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;
        queue<pair<TreeNode*,pair<int,int>>> q;
        vector<vector<int>> result;

        if(root == NULL) return result;

        q.push({root,{0,0}});
        while(!q.empty()){
            auto p = q.front();
            q.pop();

            TreeNode* frontNode = p.first;
            int hd = p.second.first;
            int lvl = p.second.second;

            nodes[hd][lvl].insert(frontNode->val);

            if(frontNode->left) q.push({frontNode->left,{hd-1,lvl+1}});
            if(frontNode->right) q.push({frontNode->right,{hd+1,lvl+1}});

        }
        

        for(auto it:nodes){
            vector<int> col;
            for(auto i:it.second){
                col.insert(col.end(),i.second.begin(),i.second.end());
            }
            result.push_back(col);
        }
        return result;
    }
};