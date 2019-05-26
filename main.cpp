#include "Header.h"

int main()
{
	stack<int> x;
	x.push(1);
	x.push(2);
	x.push(3);
	x.pop_front();
	std::cout << x.top() << "\n";
}