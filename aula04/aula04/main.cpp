#include <iostream>

using namespace std;

// passagem de parâmetro por referência
// incluir '&' antes do nome da variável

void funcao(int &x) {
    cout << "end x = " << &x << endl;
    cout << "x = " << x << endl;
    x = 4;
    cout << "x = " << x << endl;
}

int main()
{
    int y;
    y = 3;
    cout << "end y = " << &y << endl;
    cout << "y = " << y << endl;
    funcao(y);
    cout << "y = " << y << endl;

    return 0;
}
