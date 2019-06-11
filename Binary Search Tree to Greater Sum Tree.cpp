
class Solution {
    int temp = 0;
public:
    
    TreeNode* bstToGst(TreeNode* root) {
        until(root);
        return root;
    }
    
private:
    void until(TreeNode* root){
        if(!root)
            return;
        until(root->right);
        temp += root->val;
        root->val = temp;
        until(root->left);
        
    }
    
};