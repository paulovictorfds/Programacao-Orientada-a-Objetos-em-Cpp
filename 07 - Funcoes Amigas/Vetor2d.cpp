#include "Vetor2d.hpp"
#include <iostream>

Vetor2d::Vetor2d(float x, float y) {
    this->x = x; this->y = y;
}

Vetor2d operator*(float a, Vetor2d v) {
    Vetor2d resultado;
    resultado.x = a * v.x;
    resultado.y = a * v.y;
    return resultado;
}

void Vetor2d::setX(float x) {
    this->x = x;
}
void Vetor2d::setY(float y) {
    this->y = y;
}
float Vetor2d::getX() {
    return x;
}
float Vetor2d::getY() {
    return y;
}

Vetor2d::~Vetor2d() {}

void Vetor2d::imprimeVetor2d() {
    std::cout << "(" << this->x << "," << this->y << ")" << std::endl;
}
