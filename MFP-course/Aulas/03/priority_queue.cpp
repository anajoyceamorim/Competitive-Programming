#include <iostream>
#include <queue>
using namespace std;

int main(){
         priority_queue<int> fila;
         
         fila.push(10);
         fila.push(5);
         fila.size();
         fila.pop();
         cout << fila.front() << endl;
         fila.empty();
         fila.clear();
}
