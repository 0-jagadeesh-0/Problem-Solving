#include<iostream>
using namespace std;

int sqrt(int x)
{
  int start = 0;
  int end = x;
  while(start<=end)
  {
    int mid = start + (end-start)/2;
    if(mid*mid==x) return mid;
    else if(mid*mid<x) start=mid+1;
    else end=mid-1;
  }
  return end;
}

int main()
{
  int n;
  cin>>n;
  cout<<sqrt(n);
  return 0;
}
