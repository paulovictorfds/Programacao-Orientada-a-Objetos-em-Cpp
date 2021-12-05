#include <iostream>

class Vetor2d {
private:
    float x, y;

public:
    Vetor2d() {
        std::cout << "Construtor padrao" << std::endl;
        x = y = 0;
    }
    Vetor2d(float x, float y) {
        std::cout << "Construtor com argumentos" << std::endl;
        this->x = x;
        this->y = y;
    }
    ~Vetor2d() {
        std::cout << "Destrutor" << std::endl;
    }
    void imprimeVetor2d() {
        std::cout << "(" << x << "," << y << ")" << std::endl;
    }
};

int main()
{
    Vetor2d *v1, *v2, *v3;
    v1 = new Vetor2d;
    v2 = new Vetor2d(3,4);
    v3 = new Vetor2d[5];

    v1->imprimeVetor2d();
    v2->imprimeVetor2d();
    v3[2].imprimeVetor2d();
    (v3+2)->imprimeVetor2d();

    delete v1;
    delete v2;
    delete [] v3;

    return 0;
}
