#include "Vector.h"

template <typename T>
Vector<T>::Vector() : size(0), arr(nullptr) {}

template <typename T>
Vector<T>::Vector(const Vector& other) : size(other.size), arr(new T[other.size]) {
    for (size_t i = 0; i < size; ++i) {
        arr[i] = other.arr[i];
    }
}

template <typename T>
Vector<T>::~Vector() {
    delete[] arr;
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector& other) {
    if (this == &other) {
        return *this;
    }

    size = other.size;

    // deleting initial arr
    if (arr != nullptr){
	delete[] arr;
    }

    arr = new T[size];
    for (size_t i = 0; i < size; ++i) {
        arr[i] = other.arr[i];
    }

    return *this;
}

template <typename T>
bool Vector<T>::operator==(const Vector& other){
    if (size != other.size)
	return false;
    
    for (int i = 0 ; i < size;++i)
    {
        if (arr[i] != other.arr[i])
           return false;
    }
    return true;
}

template <typename T>
T& Vector<T>::operator[](size_t index) {
    if (index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return arr[index];
}

template <typename T>
const T& Vector<T>::operator[](size_t index) const {
    if (index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return arr[index];
}

template <typename T>
void Vector<T>::push_back(const T& value) {
    T* newArr = new T[size + 1];
    for (size_t i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    newArr[size] = value;
    delete[] arr;
    arr = newArr;
    ++size;
}

template <typename T>
size_t Vector<T>::getSize() const {
    return size;
}

