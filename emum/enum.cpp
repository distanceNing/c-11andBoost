#include  <iostream>
using namespace std;
#include <functional>
enum OLD_COLOR
{
	Red, Blue, Black
};

enum class NEW_COLOR
{
	Red, Blue, Black
};
int test(int x, int y)
{
	return x + y;
}
int main()
{
	function<int(int, int)> func=test;
	cout << func(1, 1) << endl;
	OLD_COLOR oc = Red;

	NEW_COLOR nc = NEW_COLOR::Blue;

	return 0;
}