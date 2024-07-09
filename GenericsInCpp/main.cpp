#include <iostream>
#include "Printer.cpp"
#include "Child.cpp"

template <class T>
void Printline(T arg)
{
	std::cout << arg << '\n';
}

int main()
{
	int liczba = 10;
	Printline<int>(liczba);

	Printer<int> p1(50);
	p1.print('a');
	std::cout << p1;

	Child<int> c1(100);
	c1.childish('a');
	std::cout << c1;

	return 0;
}