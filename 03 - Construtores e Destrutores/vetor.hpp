#ifndef VETOR_HPP
#define VETOR_HPP

class Vetor {

private:
    float x, y;

public:
    // Método contrutor com argumentos (substitui o contrutor padrão)
    Vetor(float mx = 0, float my = 0);

    // Método destrutor
    ~Vetor();

    void setX(float mx);
    void setY(float my);
    float getX(void);
    float getY(void);
};

#endif // VETOR_HPP
