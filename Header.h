#pragma once
#include<iostream>
template<class T>
class stack {
public:
	stack() :size(0), capasity(1), x(nullptr) {}
	void push(int val)
	{
		if (size + 1 < capasity)
		{
			x[size++] = val;
		}
		else
		{
			capasity *= 2;
			int* crr = new int[capasity];
			for (int i = 0; i < size; ++i)
			{
				crr[i] = x[i];
			}
			delete[] x;
			x = crr;
			x[size++] = val;

			crr = nullptr;
		}

	}

	T top()
	{
		return x[size - 1];
	}

	void pop_front()
	{
		x[--size];
	}



private:
	int size;
	int capasity;
	int* x;
};

