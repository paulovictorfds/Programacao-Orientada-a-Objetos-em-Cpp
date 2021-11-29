#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d {
private:
    float x, y;
public:
    Vetor2d(float x = 0, float y = 0);
    Vetor2d(const Vetor2d &v);
    void setX(float x);
    void setY(float y);
    float getX();
    float getY();
    void imprimeVetor();

    // Sobrecargas de produto
    float produto(Vetor2d v); // produto escalar
    Vetor2d produto(float a); // produto POR escalar

    ~Vetor2d();
};

#endif // VETOR2D_H
