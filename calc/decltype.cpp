
#include <iostream>
using namespace std;
template<typename T,typename U>
auto calc(T t,U u) -> decltype(t+u)
{
	return t+u;
}


int dmain()
{
	auto plus_int=calc(1,2);

	auto plus_double=calc(1.2233,898.232);
	
	auto plus = calc(1.2, 1);
	//cout<<decltype(plus_int)<<" "<<decltype(plus_double)<<endl;
	cout<<plus<<"  "<<plus_double<<endl;
	return 0;
}


