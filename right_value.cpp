/* ************************************************************************
 *       Filename:  right_value.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年07月14日 08时07分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
#include <iostream>
#include <vector>
#include <utility>

using namespace std;



int main()
{
	vector<int>vec={1,2,3};
	auto i=vec.begin();
	while(i!=vec.end())
	{
		cout<<*i<<" ";
		i++;
	}
	cout<<endl;

	for(const auto& i: vec )
	{
		cout<<i<<" ";
	}


	int x=0;


	int& r1=++x;
	int&& r2=x++;

	const int& r3=x++;
	const int&& r4=x++;
	
	cout<<r1<<r2<<r3<<r4<<endl;

	

	return 0;
}


