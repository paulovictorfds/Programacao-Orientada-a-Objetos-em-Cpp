#include <iostream>
#include "vetor.hpp"

using namespace std;

int main()
{
    //Utilizando diferentes formas de instanciar um objeto.

    Vetor v1, v2(7,8), v3(3);

    v1.setX(3); v1.setY(4);

    cout << "[" << v1.getX() << "," << v1.getY() << "]" << endl;
    cout << "[" << v2.getX() << "," << v2.getY() << "]" << endl;
    cout << "[" << v3.getX() << "," << v3.getY() << "]" << endl;

    return 0;
}
