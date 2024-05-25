#include <bits/stdc++.h>
using namespace std;

/*
Em case of overflow:
#define ll long long
*/

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; 
    cin >> s;
   if (s == "ACE" or s == "BDF" or s == "CEG" or s == 
   "DFA" or s == "EGB" or s == "FAC" or s == "GBD") cout << "Yes\n";
    else 
    cout << "No\n";

    return 0;
}
