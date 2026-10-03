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
    void isValid(TreeNode*root,vector<long long>&temp){
        if(root==NULL){
            return ;
        }
        isValid(root->left,temp);
        temp.push_back(root->val);
        isValid(root->right,temp);    
    }
    bool isValidBST(TreeNode* root) {
    vector<long long>temp;
     isValid(root,temp);
    for(int i=1;i<temp.size();i++){
        if(temp[i-1]>=temp[i]) return false;
    }
    return true;
    }
};