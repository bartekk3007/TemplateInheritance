#include <iostream>
#include "Printer.cpp"

template <class S>
class Child : public Printer<S>
{
public:
	Child(S arg) : Printer<S>(arg)
	{
		
	}
	template <class R>
	void childish(R second)
	{
		std::cout << second << '\t' << Child<S>::object << '\n';
	}
};