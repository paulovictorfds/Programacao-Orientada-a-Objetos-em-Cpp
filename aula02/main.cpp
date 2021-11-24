#include <iostream>
#include "Vetor2d.hpp"

int main()
{
    Vetor2d v;
    v.setX(3.5);
    v.setY(-2.0);
    std::cout << "(" << v.getX() << ", " <<
                 v.getY() << ")" << std::endl;

    return 0;
}
