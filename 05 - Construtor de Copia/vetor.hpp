#ifndef VETOR_HPP
#define VETOR_HPP


class Vetor
{

private:
    float x, y;

public:
    // construtor padrão
    Vetor();

    // construtor com argumentos
    Vetor(float mx, float my);

    // construtor de cópia
    Vetor(const Vetor &v);

    // destrutor
    ~Vetor();
    Vetor soma(Vetor v1);
    void print();

};

#endif // VETOR_HPP
