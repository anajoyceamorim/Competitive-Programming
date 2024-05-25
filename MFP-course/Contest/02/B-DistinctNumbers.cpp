#include <bits/stdc++.h>
using namespace std;

/*
Em case of overflow:
#define ll long long
*/

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, asw = 0;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    for(int i = 1; i < n; i++)
    {
        if(nums[i] != nums[i - 1]) 
        asw++;
    }

    cout << asw + 1 << "\n";

    return 0;
}
