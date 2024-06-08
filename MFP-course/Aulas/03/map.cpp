#include <iostream>
#include <map>
using namespace std;

int main()
{
         map<char, int> m1;
     
         m1.insert (pair<char,int>('a',100) );
         m1[‘b’] = 200;
         m1.size();
         m1.empty();
         m1.erase(‘a’);
         m1.find(‘b’);

}
