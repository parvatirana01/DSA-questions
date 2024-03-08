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
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root){
            return {};
        }
        vector<int>ans;
        if(root->left || root->right){
            vector<int>lr=inorderTraversal(root->left);
            ans.insert(ans.end(),lr.begin(),lr.end());
        }
        ans.push_back(root->val);
        
        if(root->right){
            vector<int>rr=inorderTraversal(root->right);
            ans.insert(ans.end(),rr.begin(),rr.end());
        }
        return ans;
    }
};