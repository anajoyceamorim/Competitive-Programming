#include <bits/stdc++.h>
using namespace std;

/*
Em case of overflow:
#define long long ll
*/

int main() {

    int n, a, b, c;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if (a + b >= 10 || a + c >= 10 || b + c >= 10){
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
