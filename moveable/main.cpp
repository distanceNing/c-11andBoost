#include <iostream>
#include <utility>
#include "moveable.h"
#include <vector>
using namespace std;
template <typename T,typename type>
using Container = T<type>;

template <class Container>
void test(Container con)
{
	typedef typename iterator_traits<typename Container::iterator>::value_type ValueType;
	con<T> test;
	for (auto i : test)
	{
		if (i == elem)
		{
			cout << "i==elem" << endl;
		}

	}
}

int main()
{
	//moveable test1;

	//moveable test2(std::move(test1)); //调用转移构造函数,test1被转移成右值&&

	//moveable test3(moveable::create());//调用转移赋值函数
	
	test(vector<int>{12,3,545,54});
	return 0;
}
