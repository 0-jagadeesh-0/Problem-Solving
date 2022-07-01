#include<iostream>
using namespace std;

class TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
}

// Recurssion

void preOrder(TreeNode* root)
{
  if(root==NULL) return;
  cout<<root->val<<" ";
  preOrder(root->left);
  preOrder(root->right);
  
}
