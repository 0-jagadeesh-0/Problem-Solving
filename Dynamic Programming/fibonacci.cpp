#include<iostream>
using namespace std;

// Using Recurssion 

int fib(int n)
{
  if(n<=1) return n;
  else return fib(n-1)+fib(n-2);
}

// Using Dynamic Programming

int fib(int n)
{
  int dp[n+1];
  dp[1]=0;
  dp[2]=1;
  for(int i=2;i<=n;i++)
  {
    dp[i]=dp[i-1]+dp[i-2];
  }
  return dp[n];
}


int main()
{
  int n;
  cin>>n;
  
  return 0;
}
