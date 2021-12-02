#include <iostream>
#include "Vetor2d.hpp"

 using namespace std;

int main()
{
    Vetor2d v1(3, 4), v2;
    v2 = 4 * v1;
    v1.imprimeVetor2d();
    v2.imprimeVetor2d();
    v2 = operator*(4, v1);
    v2.imprimeVetor2d();

    return 0;
}
