#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	//inline function
	//lambda ���Ժ�������

	auto print=[] {
		cout << "hello lambdas!" << endl;
	};
	print();

	//��Ϊ��lambda�����õ���fib ���Ա�����ʽ�ĸ���fib������	
	
	function<int(int)> fib = [&fib](int arg) {
		return arg < 2 ? 1 : fib(arg - 1) + fib(arg - 2);
	};

	//decltype(fib) x;

	vector<int> vec{ 232,43,21,97,12,231 };
	int x = 90;
	int y = 34;
	vec.erase(remove_if(vec.begin(), vec.end(), [x, y](int arg) {
		return arg > x&&arg > y;
	}), vec.end());

	for (auto i : vec)
	{
		if (i > 40)
			break;
		cout << i << endl;
	}

	cout << fib(8) << endl;
	getchar();
	return 0;
}