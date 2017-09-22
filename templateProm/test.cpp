/* ************************************************************************
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年07月15日 09时28分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <iostream>
using namespace std;
#include "templateMetaDef.h"

template <int N,int M>
struct metaFun
{
	static const int value=N+M;
};

meta_arglist <int N,int M>
meta_fun testFun
{
	static const int value=N>M ? N:M;
};

meta_arglist<meta_arg Arg1>
meta_fun demo
{
	typedef Arg1 type;
};


int main()
{
	cout<<metaFun<10,10>::value<<endl;
	
	cout<<testFun<11,20>::value<<endl;
	

	return 0;
}

