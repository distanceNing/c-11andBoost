#include <iostream>
#include <functional>
#include <memory>
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


	cout << fib(8) << endl;


	auto fun = [](int in) {
		int t = 3;
		return [=](int x) {return in + t + x;};
	};
	//ͨ���������ɺ���
	//���ɵĺ������������ġ�״̬��
	auto fun1 = fun(2);
	auto res = fun1(2);
	cout << res << "\n";


	/* ����ʽ���
	 * map��ӳ�� lambda
	 * reduce������ for_each
	 * filte������
	 */


	getchar();
	return 0;
}