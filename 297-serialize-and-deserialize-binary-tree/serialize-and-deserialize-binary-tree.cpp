/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void Isserialize(TreeNode*root,string &data){
        if(root==NULL){
            data+="null,";
            return;
        }
        data+=to_string(root->val)+",";
        Isserialize(root->left,data);
        Isserialize(root->right,data);
        
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
       string data="";
       Isserialize(root,data);
       return data; 
    }

    // Decodes your encoded data to tree.
    int idx=-1;
    TreeNode* deserialize(string data) {
        vector<string> tokens;
        string token;
        stringstream ss(data);
        while (getline(ss, token, ',')) {
            tokens.push_back(token);
        }
        int idx = -1;
        return deserializeHelper(tokens, idx);
    }

    TreeNode* deserializeHelper(vector<string>&tokens,int &idx){
        idx++;
        if (idx >= tokens.size() || tokens[idx] == "null") {
            return nullptr;
        }
        TreeNode* node = new TreeNode(stoi(tokens[idx]));
        node->left = deserializeHelper(tokens, idx);
        node->right = deserializeHelper(tokens, idx);
        return node;
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));