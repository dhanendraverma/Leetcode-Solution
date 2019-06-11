
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        if(!root->left || !root->right)
            return 1+max(minDepth(root->left), minDepth(root->right));
        return 1+min(minDepth(root->left), minDepth(root->right));
        
    }
};
