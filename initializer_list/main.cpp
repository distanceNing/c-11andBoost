#include "Foo.h"
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	//不仅容器接受initializer_list为参数
	//部分算法也接受这样的参数。
	Foo foo1(1, 2);

	Foo foo2{ 1,2,34,5,6,7 };

	Foo foo3{ 12,34 };

	cout << min({ 1,23,4,5,6,5 }) << endl;

	cout << min({ "aaa", "ccc", "dddd" }) << endl;

	cout << minmax({ 1,2,3,46,7,8,9,0,6456 }).first << endl;
	return 0;
}