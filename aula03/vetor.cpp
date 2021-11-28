#include "vetor.hpp"

Vetor::Vetor(float mx, float my) {
    x = mx;
    y = my;
}

Vetor::~Vetor() {}

void Vetor::setX(float mx) {
    x = mx;
}

void Vetor::setY(float my) {
    y = my;
}

float Vetor::getX(void) {
    return x;
}

float Vetor::getY(void) {
    return y;
}
