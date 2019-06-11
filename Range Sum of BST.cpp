
class Solution {
    int sum=0;
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if ( NULL == root )  
        return 0;  
      
   
        if ( L < root->val )  
            rangeSumBST(root->left, L, R);  
   
        if ( L <= root->val && R >= root->val )  
                sum+=root->val;  
      
  
        if ( R > root->val )  
            rangeSumBST(root->right, L, R);  
        return sum;
    }
};
