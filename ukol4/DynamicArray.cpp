#include "DynamicArray.h"

int DynamicArray::getAt(int index)
{
    return this->array[index];
}

void DynamicArray::setAt(int index, int number)
{
    this->array[index] = number;
}

DynamicArray::DynamicArray(int n)
{
    this->count = 0;
    this->length = n;
    this->array = new int[n];
}

DynamicArray::DynamicArray(int* arr, int length)
{
    this->count = length;
    this->length = 2 * length;
    this->array = new int[2 * length];
    for (int i = 0; i < length; i++) {
        this->array[i] = arr[i];
    }
}

int DynamicArray::getCount()
{
    return this->count;
}

int DynamicArray::getLength()
{
    return this->length;
}

DynamicArray *DynamicArray::repeat(int n, int initValue)
{
    DynamicArray *result = new DynamicArray(n);
    for (int i = 0; i < n; i++) {
        result->setAt(i, initValue);
    }
    return result;
}

DynamicArray* DynamicArray::range(int start, int end)
{
    if (start > end) {
        int x = start;
        start = end;
        end = x;
    }
    int length = end - start;
    DynamicArray* result = new DynamicArray(length);
    for (int i = 0; i < length; i++) {
        result->setAt(i, (start + i));
    }
    return result;
}

void DynamicArray::add(int number)
{
    if (this->getCount() < this->getLength()) {
        this->setAt(this->getCount(), number);
        this->count++;
    }else {
        int *arr = new int[this->getLength() * 2];
        for (int i = 0; i < this->getLength(); i++) {
            arr[i] = this->getAt(i);
        }
        this->array = arr;
        this->length = this->getLength() * 2;
        this->setAt(this->getCount(), number);
        this->count++;
    }
}

