#pragma once
#include <cstddef>

template <typename T>
class Vector {
private:
    T* arr;
    size_t size;

public:
    Vector();

    Vector(const Vector& other);

    ~Vector();

    Vector& operator=(const Vector& other);

    bool operator==(const Vector& other);	

    T& operator[](size_t index);
    const T& operator[](size_t index) const;

    void push_back(const T& value);

    size_t getSize() const;

};
