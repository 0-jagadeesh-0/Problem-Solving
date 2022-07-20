#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &a, int n)
{
  int i, key;
  for (int j = 1; j < n; j++)
  {
    key = a[j];
    i = j - 1;
    while (i >= 0 && a[i] > key)
    {
      a[i + 1] = a[i];
      i--;
    }
    a[i + 1] = key;
  }
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  insertionSort(arr, n);
  return 0;
}

// Time Complexity is O(N*N).
