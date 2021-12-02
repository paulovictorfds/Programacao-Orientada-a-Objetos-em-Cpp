#ifndef MOTOR_HPP
#define MOTOR_HPP
#include "equipamento.hpp"

class Motor : public Equipamento {
private:
    float potencia;
    float velocidade;
public:
    Motor();

    float getPotencia() const;
    void setPotencia(float potencia);
    float getVelocidade() const;
    void setVelocidade(float velocidade);
};

#endif // MOTOR_HPP
