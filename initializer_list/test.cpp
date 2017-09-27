#include "Foo.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

 struct TEST_STRUCT
{
	TEST_STRUCT(int x, int y) :x_(x), y_(y) {}
	int x_;
	int y_;
};


int main()
{
	//不仅容器接受initializer_list为参数
	//部分算法也接受这样的参数。
	//Foo foo1(1, 2);
	//
	//Foo foo2{ 1,2,34,5,6,7 };
	//
	//Foo foo3{ 12,34,23 };
	//
	//Foo foo4(1, 2, 3);
	//
	//Foo foo5(4,2);
	//在没加explicit会将1默认转换为Foo(int x, int y = 0)
	//加上后不能通过编译
	//foo5 = 1;
	//cout << min({ 1,23,4,5,6,5 }) << endl;
	//
	//cout << min({ "aaa", "ccc", "dddd" }) << endl;
	//
	//cout << minmax({ 1,2,3,46,7,8,9,0,6456 }).first << endl;

	cout << "sizeof(int) : " << sizeof(int) << endl;
	cout << "sizeof(string) : " << sizeof(string) << endl;
	cout << "sizeof(long) : " << sizeof(long) << endl;
	cout << "sizeof(Foo) : "<<sizeof(Foo) << endl;
	
	Foo* ptr = new Foo;
	delete ptr;
	
	Foo* ptr2 = new Foo[5];
	delete[] ptr2;




	//vector<TEST_STRUCT> vec{ TEST_STRUCT(1,23) };
	//for (const auto & i : vec)
	//{
	//	cout << i.x_ << " "<<i.y_<<"\t";
	//}

	vector<int> ivec{ 1,2,34,5,6,7,7 };
	//当容器中的数据类型可以隐式转换为Foo时，可以这样写for
	//for (const Foo& i : ivec)
	//{
	//}
	return 0;
}