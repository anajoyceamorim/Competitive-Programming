#include <bits/stdc++.h>
using namespace std;

int max_subarray_sum(int arr[], int n) {
  int current_sum = arr[0];
  int max_sum = current_sum;

  for (int i = 1; i < n; i++) {
    current_sum = max(arr[i], current_sum + arr[i]);
    max_sum = max(max_sum, current_sum);
  }

  return max_sum;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);  
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int max_sum = max_subarray_sum(arr, n);
  cout << max_sum << endl;

  return 0;
}
