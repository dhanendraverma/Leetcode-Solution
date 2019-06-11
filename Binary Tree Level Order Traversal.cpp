
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        int i=0, sz;
        TreeNode* curr = root;
        queue<TreeNode*> q;
        q.push(curr);
        vector<vector<int>> ans;
         vector<int> temp;
        if(!root)
            return ans;
        
        while(!q.empty())
        {
            sz = q.size();
            while(sz--)
            {
                curr = q.front();
                temp.push_back(curr->val);
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};
