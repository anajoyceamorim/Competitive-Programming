#include <iostream>
#include <stack>

int main(){
         stack<int> pilha;
         
         pilha.push(10);
         pilha.push(5);
         pilha.size();
         pilha.pop();
         cout << pilha.top() << endl;
         pilha.empty();
         pilha.clear();
}
