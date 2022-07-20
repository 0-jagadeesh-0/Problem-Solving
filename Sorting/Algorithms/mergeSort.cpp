#include<iostream>
using namespace std;


void merge(int start,int mid, int end, int a[])
{
  int leftSize = mid - start +1;
  int rightSize = end - mid;
  int leftSubArray[leftSize];
  int rightSubArray[rightSize];
  for(int i=0;i<leftSize;i++)
  {
    leftSubArray[i] = a[start+i];
  }
  for(int i=0;i<rightSize;i++)
  {
    rightSubArray[i] = a[mid+i+1];
  }
  int i=0;
  int j=0;
  int k=start;
  
//   Comparing elements in left subarray and right subarray
  
  while(i<leftSize&&j<rightSize)
  {
    if(leftSubArray[i]<rightSubArray[j])
    {
      a[k]=leftSubArray[i];
      i++;
    }
    else
    {
      a[k]=rightSubArray[j];
      j++;
    }
    k++;
  }
  
//   If elements left in left subarray
  
  while(i<leftSize)
  {
    a[k]=leftSubArray[i];
    i++;
    k++;
  }
  
//   If elements left in right subarray
  
  while(j<rightSize)
  {
    a[k]=rightSubArray[j];
    j++;
    k++;
  }
  
  
}



void mergeSort(int start,int end,int a[])
{
  if(start<end)
  {
    int mid = start + (end-start)/2;
    mergeSort(start,mid,a);
    mergeSort(mid+1,end,a);
    merge(start,mid,end,a);
  }
}


int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>> arr[i];
  }
  mergeSort(0,n-1,arr);
}


// Time Complexity is O(NlogN).


