#include <iostream>

template <typename T>
T media(T a, T b) {
    return (a + b) / 2;
}

int main() {
    int a = 3, b = 4;
    float x = 3.0, y = 4.0;

    std::cout << "media (int) = " << media(a, b) << std::endl;
    std::cout << "media (int) = " << media<int>(x, y) << std::endl;
    std::cout << "media (float) = " << media(x, y) << std::endl;
    std::cout << "media (float) = " << media<float>(a, b) << std::endl;

    return 0;
}
