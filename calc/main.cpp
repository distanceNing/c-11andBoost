/* ************************************************************************
 *       Filename:  main.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年07月14日 09时31分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <iostream>
using namespace std;
template<typename T,typename U>
auto calc(T t,U u) -> decltype(t+u)
{
	return t+u;
}


int main()
{
	auto plus_int=calc(1,2);

	auto plus_double=calc(1.2233,898.232);

//	cout<<decltype(plus_int)<<" "<<decltype(plus_double)<<endl;
	cout<<plus_int<<"  "<<plus_double<<endl;
	return 0;
}


