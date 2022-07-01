#include<iostream>
using namespace std;

class TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
}

// Recurssion

void inOrder(TreeNode* root)
{
  if(root==NULL) return;
  inOrder(root->left);
  cout<<root->val<<" ";
  inOrder(root->right);
}
