#ifndef PRINTER
#define PRINTER
#include <iostream>

template <typename T>
class Printer
{
public:
	int object;

	Printer(T arg)
	{
		object = arg;
	}
	template <class U>
	void print(U second)
	{
		std::cout << second << '\t' << object << '\n';
	}
	template <class U>
	friend std::ostream& operator<<(std::ostream& os, const Printer<U>& printer);
};

template <typename T>
std::ostream& operator<< (std::ostream& os, const Printer<T>& printer)
{
	return os << "output operator overriden\t" << printer.object << '\n';
}

#endif