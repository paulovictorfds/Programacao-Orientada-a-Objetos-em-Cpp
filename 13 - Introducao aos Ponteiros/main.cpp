#include <iostream>


int main()
{
    // Alocando um único elemento
    int *x;
    x = new int;
    *x = 3;
    std::cout << "Endereco de x = " << &x << std::endl;
    std::cout << "Valor de x = " << x << std::endl;
    std::cout << "Conteudo de x = " << *x << std::endl;
    delete x;

    // Alocando um bloco
    int *y;
    y = new int[10];
    y[2] = 3;
    std::cout << "Endereco de y = " << &y << std::endl;
    std::cout << "Valor de y = " << y << std::endl;
    std::cout << "Conteudo de y = " << *y << std::endl;
    delete [] y;

    return 0;
}
