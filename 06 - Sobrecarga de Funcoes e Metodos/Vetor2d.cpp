#include "Vetor2d.hpp"
#include <iostream>

Vetor2d::Vetor2d(float x, float y)
{
    this->x = x; this->y = y;
}

Vetor2d::Vetor2d(const Vetor2d &v) {
    this->x = v.x;
    this->y = v.y;
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

float Vetor2d::produto(Vetor2d v) {
    float escalar;

    escalar = this->x * v.x + this->y * v.y;

    return escalar;
}

Vetor2d Vetor2d::produto(float a) {
    Vetor2d v;

    v.x = a * this->x;
    v.y = a * this->y;

    return v;
}

Vetor2d::~Vetor2d() {}

void Vetor2d::imprimeVetor() {
    std::cout << "(" << this->x << "," << this->y << ")" << std::endl;
}
