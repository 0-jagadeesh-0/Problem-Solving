#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
  int temp = a;
  a=b;
  b=temp;
}

void bubbleSort(int n,vector<int> arr)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-1-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(a[j],a[j+1]);
      }
    }
  }
}

int main()
{
  int n;
  cin>>n;
  vector<int> arr(n,0);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  bubbleSort(n,arr);
  return 0;
}

// Time Complexity is O(N).

