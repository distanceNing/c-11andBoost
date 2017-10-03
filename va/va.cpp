#include <iostream>
#include <bitset>
using namespace std;
#include <functional>
using callBack = function<void(int)>;

//±ß½ç
void print()
{}

template <class T,class ...Arg>
void print(const T & fitstArg, const Arg& ...arg)
{
	cout << fitstArg <<sizeof...(arg)<< endl;
	print(arg...);
}


void printMsg(const char * format)
{
	while (*format)
	{
		if (*format == '%'&&*(++format) != '%')
		{
			throw std::runtime_error("invalid format");
		}
		cout << *format++;
	}
}
template <class ...Arg,class T>
void printMsg(const char * format,T value, Arg ...arg)
{
	while (*format)
	{
		if (*format == '%'&&*(++format) != '%')
		{
			cout << value;
			printMsg(++format, arg...);
			return;
		}
		cout << *format++;
	}
	throw std::logic_error("error arg");
}
int main()
{
	int x = 3;
	printMsg("%d     \n\n", x);
//	print("aaaaa", std::bitset<8>(123), 123, 324);

	getchar();
	return 0;
}