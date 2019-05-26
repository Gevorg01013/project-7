#include<iostream>
template<class T>
class stack {
public:
	stack() :size(0), capasity(1), x(nullptr) {}
	void push(int val);
		

	T top();

	void pop_front();



private:
	int size;
	int capasity;
	int* x;
};
