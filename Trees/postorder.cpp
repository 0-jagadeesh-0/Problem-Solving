#include<iostream>
using namespace std;

class TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
}

// Recurssion

void postOrder(TreeNode* root)
{
  if(root==NULL) return;
  postOrder(root->left);
  cout<<root->val<<" ";
  postOrder(root->right);
}
