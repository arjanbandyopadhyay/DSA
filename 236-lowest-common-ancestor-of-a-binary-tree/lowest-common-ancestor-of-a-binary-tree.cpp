/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(root->val==p->val || root->val==q->val){
            return root;
        }
        TreeNode* LCA=lowestCommonAncestor(root->left,p,q);
        TreeNode* RCA=lowestCommonAncestor(root->right,p,q);
        
        if(LCA && RCA){
            return root;
        }else if(LCA!=NULL){
            return LCA;
        }else{
            return RCA;
        }
    }
};