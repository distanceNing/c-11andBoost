
#include <iostream>
#include <vector>
#include <utility>

using namespace std;



int main()
{
	int x=0;


	int& r1=++x;
	int&& r2=x++;

	const int& r3=x++;
	const int&& r4=x++;
	
	cout<<r1<<r2<<r3<<r4<<endl;

	
	getchar();
	return 0;
}


