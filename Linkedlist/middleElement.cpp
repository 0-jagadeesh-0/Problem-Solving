// Find the middle element in the linkedlist.

#include<iostream>
using namespace std;

Node* middleElement(Node* root)
{
  Node* fast = root;
  Node* slow = root;
  while(fast->next&&fast->next->next)
  {
    slow=slow->next;
    fast=fast->next->next;
  }
  if(fast->next) return slow->next;
  return slow;
  
}

// Time Complexity is O(N)
