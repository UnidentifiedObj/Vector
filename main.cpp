#include <iostream>
#include "Vector.cpp"

int main() {
    Vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    std::cout << "Vector elements: ";
    for (size_t i = 0; i < vec.getSize(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // Test copy assignment
    Vector<int> vec2;
    vec2 = vec;

    std::cout << "Copied Vector elements: ";
    for (size_t i = 0; i < vec2.getSize(); ++i) {
        std::cout << vec2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
