#include <bits/stdc++.h>
using namespace std;

/*
Em case of overflow:
#define ll long long
*/

void sort(){
    int n, k;
    cin >> n >> k;
    vector<int> asw(n);

    for(int i = 0; i < n; i++) {
        asw[i] = n - i;
    }

    reverse(asw.end() - k - 1, asw.end());

    for(int i = 0; i < n; i++) {
        if(i){
            cout << " ";
        }
        cout << asw[i];
    }

    cout << "\n";
}

int main() {

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        sort();
    }

    return 0;
}
