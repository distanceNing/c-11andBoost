#ifndef _TEST_FOO_H_
#define _TEST_FOO_H_
#include <iostream>
#include <initializer_list>
class Foo
{
public:
	Foo(int a, int b)
	{
		std::cout << a <<"\t"<< b << std::endl;
	}

	Foo(std::initializer_list<int> init_list)
	{
		std::cout << "initializer_list"<< std::endl;
		for (auto i : init_list)
		{
			std::cout << i << "\t";
		}
		std::cout << "\n";
	}
	~Foo(){}
};

#endif // !_TEST_FOO_H_



