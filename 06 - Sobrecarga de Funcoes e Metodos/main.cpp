#include <iostream>
#include "Vetor2d.hpp"
#include "Vetor2d.cpp"

int main()
{
    Vetor2d v1, v2, v3;

    v1.setX(3); v1.setY(4);
    v2.setX(-1); v2.setY(10);

    // produto escalar
    float resultado;
    resultado = v1.produto(v2);
    std::cout << "v1 * v2 = " << resultado << std::endl;

    // produto POR escalar
    v3 = v1.produto(2);
    std::cout << "2 * v1 = ";
    v3.imprimeVetor();

    return 0;
}
