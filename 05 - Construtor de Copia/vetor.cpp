#include "vetor.hpp"
#include <iostream>

using namespace std;

Vetor::Vetor() {
    this->x = this->y = 0;
    cout << "Contrutor padrao"  << endl;
}

Vetor::Vetor(float mx, float my) {
    this->x = mx; this->y = my;
    cout << "Contrutor com argumentos"  << endl;
}

Vetor::Vetor(const Vetor &v) {
    this->x = v.x; this->y = v.y;
    cout << "Contrutor de copia"  << endl;
}

Vetor::~Vetor() {
    cout << "Destrutor" << endl;
}

Vetor Vetor::soma(Vetor vSoma) {
    Vetor resultado;
    resultado.x = this->x + vSoma.x;
    resultado.y = this->y + vSoma.y;

    return resultado;
}

void Vetor::print() {
    cout << "(" << x << "," << y << ")" << endl;
}
