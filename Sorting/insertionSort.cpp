#include<iostream>
using namespace stdl;

void insertionSort(int arr[],int n);
{
  int i,key;
  for(int j=1;j<n;j++)
  {
    key = a[j];
    i = j-1;
    while(i>=0&&a[i]>key)
    {
      a[i+1]=a[i];
      i--;
    }
    a[i+1]=key;
  }
}


// Time Complexity is O(N*N).
