#include <bits/stdc++.h>
using namespace std;

//Wrong answer

/*
Em case of overflow:
#define ll long long
*/

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, q;
  cin >> n >> q;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int prefix_sum[n + 1];
  prefix_sum[0] = 0;
  for (int i = 1; i <= n; i++) {
    prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
  }

  for (int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;

    int sum = prefix_sum[b] - prefix_sum[a - 1];
    cout << sum << endl;
  }

    return 0;
}
