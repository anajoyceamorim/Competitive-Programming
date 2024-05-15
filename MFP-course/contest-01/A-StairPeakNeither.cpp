#include <bits/stdc++.h>
using namespace std;

/*
Em case of overflow:
#define long long ll
*/

int main() {

    int a, b, c, n;

    cin >> n;

    for( int i = 0; i < n; i++){
    cin >> a >> b >> c;
        if (a < b && b < c){
            cout << "STAIR" << "\n";
        } else if (a < b && b > c){
            cout << "PEAK" << "\n";
        } else {
            cout << "NONE" << "\n";
        }
    }

    return 0;
}