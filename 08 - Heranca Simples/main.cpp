#include <iostream>
#include <cstring>
#include "motor.hpp"

int main()
{
    Motor m;

    m.setFabricante("ACME");
    m.setPreco(23.45);
    m.setNome("Speedatron");
    m.setPotencia(130);
    m.setVelocidade(280);
    std::cout << m.getFabricante() << std::endl
        << m.getPreco() << std::endl
        << m.getNome() << std::endl
        << m.getPotencia() << std::endl
        << m.getVelocidade() << std::endl;

    return 0;
}
