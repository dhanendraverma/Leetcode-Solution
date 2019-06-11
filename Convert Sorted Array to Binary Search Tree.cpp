
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
         return GenerateTree(nums,0,nums.size()-1);
            
        
    }
private:
    TreeNode* GenerateTree(vector<int>& nums, int start, int end) {
        if(start > end)
            return NULL;
        int mid = (start+end)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = GenerateTree(nums,start,mid-1);
        root->right = GenerateTree(nums,mid+1,end);
        return root;
    }
};
