#pragma once
class DynamicArray
{
private:
	int* array;
	int count;
	int length;
public:
	int getAt(int index);
	void setAt(int index, int number);
	DynamicArray(int n);
	DynamicArray(int* arr, int length);
	int getCount();
	int getLength();
	static DynamicArray* repeat(int n, int initValue);
	static DynamicArray* range(int start, int end);
	void add(int number);
};

