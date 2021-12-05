#include <iostream>
#include "motor.hpp"

float Motor::getPotencia() const {
    return this->potencia;
}

void Motor::setPotencia(float potencia) {
    this->potencia = potencia;
}

float Motor::getVelocidade() const {
    return velocidade;
}

void Motor::setVelocidade(float velocidade) {
    this->velocidade = velocidade;
}

Motor::Motor() {
    std::cout << "Construtor Motor" << std::endl;
}

Motor::~Motor() {
    std::cout << "Destrutor Motor" << std::endl;
}
