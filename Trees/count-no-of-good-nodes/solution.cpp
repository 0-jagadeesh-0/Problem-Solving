class Solution {
public:
    int dfs(TreeNode* root,int maxi)
    {
        if(root)
        {
            maxi = max(maxi,root->val);
            return root->val==maxi?1+ dfs(root->left,maxi)+dfs(root->right,maxi):dfs(root->left,maxi)+dfs(root->right,maxi);
        }
        return 0;
    }
    int goodNodes(TreeNode* root) {
        int maxi=INT_MIN;
        return dfs(root,maxi);;
    }
};