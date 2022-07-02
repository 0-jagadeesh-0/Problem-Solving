#include<iostream>
using namespace std;

void levelOrder(TreeNode* root)
{
  vector<vector<int>> ans;
  if(root==NULL) return;
  queue<TreeNode*> q;
  q.push(root);
  while(!q.empty())
  {
    vector<int> a;
    int n = q.size();
    for(int i=0;i<n;i++)
    {
      TreeNode* curr = q.front();
      a.push_back(curr->val);
      if(curr->left) q.push(curr->left);
      if(curr->right) q.push(curr->right);
      q.pop();
    }
    ans.push_back(a);
  }
}

// Time Complexity is O(N).
