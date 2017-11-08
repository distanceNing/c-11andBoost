#include <iostream>
#include <vector>
#include <utility>
#include "mystring.h"
using namespace std;
//右值：只能出现在operator = 的右边 局部变量

void process(int & i)
{
	cout << "process(int & i) " << i << endl;
}
void process(int && i)
{
	cout << "process(int && i) " << i << endl;
}

void forward(int && i)
{
	cout << "forward(int && i) " << i << endl;
	//这样调用的是process(int & i)
	//process(i)
	//这样可以完美转发，调用process（int&& i）
	process(std::forward<int>(i));
}

int main()
{
	MyString str("hello world");
	
	MyString str2(std::move(str));

	MyString str3(MyString("ASDASD"));

	str = std::move(str2);
	std::vector<int> test;
	auto ite=test.end();

	int temp = 2;
	test.insert(ite, 1);
	test.insert(test.end(),std::move(temp));
	test.emplace_back(temp);


	//process(temp);
	//process(1);
	forward(1);
	int x = 0;
	int& r1=++x;
	int&& r2=x++;

	const int& r3=x++;
	const int&& r4=x++;
	
	cout<<r1<<r2<<r3<<r4<<endl;

	
	getchar();
	return 0;
}


