#include <iostream>
#include <utility>
#include "moveable.h"
#include <vector>
using namespace std;

//两种写法并无区别
typedef void(*func)(int, int);

using fun = void(*)(int, int);

//模板别名
template <class T>
using Vec = vector<T, allocator<T>>;
//模板的模板参数
template <class T,template <class> class Container>
class XCLs
{
public:
	XCLs(int size=6)
	{
		for (int i = 0;i < size;++i)
		{
			container_.insert(container_.end(), T());
		}
	}

private:
	Container<T> container_;
};

int amain()
{
	XCLs<int, Vec> test;

	//moveable test1;

	//moveable test2(std::move(test1)); //调用转移构造函数,test1被转移成右值&&

	//moveable test3(moveable::create());//调用转移赋值函数
	
	//test(vector<int>{12,3,545,54});
	return 0;
}
