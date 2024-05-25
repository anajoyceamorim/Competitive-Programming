#include <bits/stdc++.h>
using namespace std;

/*
Em case of overflow:
#define ll long long
*/

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, j = 0;
    cin >> n;

    vector<int> nums(n - 1);
    for(int i = 0; i < (n - 1); i++) 
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    for(j; j < (n - 1); j++) 
    {
        if (nums[j] != j + 1)
            break;
    }

    cout << j + 1 << "\n";

    return 0;
}
