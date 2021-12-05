#include <iostream>

class Base {
protected:
    int a, b;
public:
    Base() {
        a = b = 0;
    }
    ~Base() {}
    void foo(int x, int y) {
        this->a = x, this->b = y;
    }
    int getA() { return this->a; }
    int getB() { return this->b; }
};

class Derivada : public Base {
private:
    int c;
public:
    Derivada() {
        a = b = c = 0;
    }
    ~Derivada() {}
    void operator=(Base &x) {
        a = x.getA();
        b = x.getB();
        c = 0;
    }
    void bar(int z) {
        c = z;
    }
};

int main()
{
    Base b;
    Derivada d;
    b = d;
    d = b;

    return 0;
}
