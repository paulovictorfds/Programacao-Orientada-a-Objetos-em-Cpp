#include <iostream>

template <typename T>
class setAlo {
private:
    T x, y;
public:
    setAlo(T x, T y);
    T getX();
};

template <typename T>
setAlo<T>::setAlo(T x, T y) {
    this->x = x;
    this->y = y;
}

template <typename T>
T setAlo<T>::getX() {
    return this->x;
}

int main()
{
    setAlo <int> aloInt(3, 4);
    setAlo <double> aloDouble(3.2, 4.5);

    std::cout << "x (int) = " << aloInt.getX() << std::endl;
    std::cout << "x (double) = " << aloDouble.getX() << std::endl;

    return 0;
}
