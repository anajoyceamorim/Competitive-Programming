#include <bits/stdc++.h>
using namespace std;

/*
O vector é uma classe do cpp que garante algumas funcionalidades
por exemplo, eu não preciso pré estabelecer um tam.
*/

signed main() {
    // vector<T> nome_do_vetor
    vector<int> v;
    for (int i = 0; i < 5; i++)
        v.push_back(i); //para add ele

    // imprime: 0 1 2 3 4 5 
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' '; //v[0], v[1], v[2], ... v[v.size()-1]
    cout << '\n';  

    //Declaração
    int n = 4;
    vector<int> a(3), // {0,0,0}
                b(n); // {0,0,0,0} 

    a.push_back(5); // add um ele ao fim de a
    b.pop_back(); // remove um elemento ao fim de b    

    cout << a.size() << '\n';
    cout << b.size() << '\n';

    a.clear(); // remove todos os ele
    a.pop_back(); // erro: não tem nada para remover 

    vector<int> c(3, -1); // {-1, -1, -1}
    c[0] = 5;
    for (int x : c)
        cout << x << ' '; // 5 -1 -1
    cout << '\n';   

    return 0;
}
