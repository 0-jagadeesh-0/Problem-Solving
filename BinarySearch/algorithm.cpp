#include <iostream>
using namespace std;

bool bs(int arr[], int n, int target)
{
  int start = 0;
  int end = n - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
      return true;
    else if (arr[mid] < target)
      start = mid + 1;
    else
      end = mid - 1;
  }
  return false;
}

int main()
{
  int arr[10] = {1, 3, 5, 6, 12, 14, 24, 29, 35, 50};
  cout << bs(arr, 10, 1);
  return 0;
}

// Time Complexity is O(logN).
