#include<iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
  int mini;
  for(int i=0;i<n;i++)
  {
    mini = i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[i]) mini = j;
    }
    int temp = arr[i];
    arr[i] = arr[mini];
    arr[mini] = temp;
  }
}

// Time Complexity is O(N*N).
