/*
PONTOS: podem ser representados como classes ou estruturas, como pares ou como vetores
PONTOS DO TIPO DOUBLE: precisa de uma implementação mais refinada de comparação
*/

#include <bits/stdc++.h>
using namespace std;

using Point2D = pair<int, int>;
using Point3D = tuple<int, int, int>;

int main() {

    Point3D p {1, 2, 3};
    Point3D q {1, 2, 3};

    if (p == q) {
        auto [x, y, z] = q;  //Decomposição estruturada para TUPLAS
        auto w = x*x + y*y + z*z;
    }

    return 0;
}
