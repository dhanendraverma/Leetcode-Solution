class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
      if (!root) 
        return ans; 
  
 
    stack<TreeNode*> currentlevel; 
    stack<TreeNode*> nextlevel; 
        currentlevel.push(root); 
        vector<int> temp1;
  
    bool lefttoright = true; 
    while (!currentlevel.empty()) { 
  
  TreeNode* temp = currentlevel.top(); 
        currentlevel.pop(); 
  
           if (temp) { 
  
             
            temp1.push_back(temp->val); 
  
            if (lefttoright) { 
                if (temp->left) 
                    nextlevel.push(temp->left); 
                if (temp->right) 
                    nextlevel.push(temp->right); 
            } 
            else { 
                if (temp->right) 
                    nextlevel.push(temp->right); 
                if (temp->left) 
                    nextlevel.push(temp->left); 
            } 
        } 
  
        if (currentlevel.empty()) { 
            lefttoright = !lefttoright; 
            swap(currentlevel, nextlevel); 
            ans.push_back(temp1);
            temp1.clear();
        } 
    }
        return ans;
    }
};
