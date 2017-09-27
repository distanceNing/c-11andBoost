#ifndef _TEST_FOO_H_
#define _TEST_FOO_H_
#include <iostream>
#include <initializer_list>
#include <string>
//����new delete

class Foo
{
public:
	Foo(int x = 0) : x_(x) { std::cout << "defaut ctor" << std::endl; }

	Foo(std::initializer_list<int> init_list)
	{
		std::cout << "initializer_list"<< std::endl;
		for (auto i : init_list)
		{
			std::cout << i << "\t";
		}
		std::cout << "\n";
	}

	//more than one arg
	//���߱���������Ҫ����ʽת�� ֻ����ȷ���ù��캯����ʱ��ŵ��á�
	explicit Foo(int x, int y, int z)
	{
		std::cout << x<< "\t" << y << "\t"<<z<< std::endl;
	}

	Foo(int x, int y = 0)
	{
		x_ = x;
		std::cout << x_ << "\t" << y << std::endl;
	}
	//size:26 bytes
	void* operator new(size_t size)
	{
		std::cout << "operator new size is "<<size << std::endl;
		void *ptr = malloc(size);
		return ptr;
	}

	void operator delete(void * ptr, size_t size)
	{
		std::cout << "operator delete size is " << size << std::endl;
		free(ptr);
	}

	//size: 184 bytes����һ����������С 4 bytes
	void* operator new[](size_t size)
	{
		std::cout << "operator new[] size is " << size<< std::endl;
		void *ptr = malloc(size);
		return ptr;
	}

	void operator delete[](void * ptr, size_t size)
	{
		std::cout << "operator delete[] size is " << size << std::endl;
		free(ptr);
	}


	Foo operator=(const Foo& x)
	{
		x_ = x.x_;
		std::cout <<x_<< std::endl;
		return *this;
	}

	~Foo(){}


private:
	int x_;
	long y_;
	std::string str_;
};

#endif // !_TEST_FOO_H_



