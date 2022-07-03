#include<iostream>
using namespace std;

int findMax(int arr[],int n)
{
  int maxi = INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>maxi) maxi = arr[i];
  }
  
  return maxi;
}

void countingSort(int arr[],int n)
{
  
//   Find the maximum element in the array
  
  int maxi = findMax(arr,n)+1;
  
//   Initialize an array to store the frequency of each element.
  
  int fre[maxi]={0};
  
//   Initialize an array to store the output.
  
  int output[n];
  
  for(int i=0;i<n;i++) fre[arr[i]]++;
  
  for(int i=1;i<maxi;i++) fre[i]+=fre[i-1];
  
//   Rotate the array.
  
  for(int i=maxi-1;i>0;i--) fre[i]=fre[i-1];
  
  for(int i=0;i<n;i++)
  {
    output[fre[arr[i]]]=arr[i];
    fre[arr[i]]++;
  }
  
  for(int i=0;i<n;i++) arr[i]=output[i];
   
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  countingSort(arr,n);
  return 0;
}


// Time Complexity is O(N).


