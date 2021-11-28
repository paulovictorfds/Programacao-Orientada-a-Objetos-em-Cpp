#include "Vetor2d.hpp"

void Vetor2d::setX(float x_) {
    if (x_ > 0) {
        x = x_;
    } else {
        x = 0;
    }
}
void Vetor2d::setY(float y_) {
    if (y_ > 0) {
        y = y_;
    } else {
        y = 0;
    }
}
float Vetor2d::getX(void) {
    return x;
}
float Vetor2d::getY(void) {
    return y;
}
