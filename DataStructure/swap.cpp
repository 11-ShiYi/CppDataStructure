#include <iostream>

template<typename T>

void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 20, b = 10;
	swap(a, b);
	swap<int>(a, b);
	std::cout << a << b<<std::endl;
	return 0;
}