#include<iostream>
using namespace std;

void swap(int a,int b)
{
  int temp = arr[a];
  arr[a]=arr[b];
  arr[b]=temp;
  return ;
}

int partition(int arr[],int start,int end)
{
  int pivot = arr[end];
  int i = start-1;
  for(int j=start;j<end;j++)
  {
    if(arr[j]<pivot)
    {
      i++;
      swap(i,j);
    }
  }
  swap(i+1,end);
  return (i+1);
}

void quickSort(int arr[],int start,int end)
{
  if(start<end)
  {
    int pi = partition(arr,start,end);
    quickSort(arr,start,pi-1);
    quickSort(arr,pi+1,end);
  }
  return ;
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  quickSort(arr,0,n-1);
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}
