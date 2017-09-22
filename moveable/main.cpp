/* ************************************************************************
 *       Filename:  main.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年07月14日 08时38分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
#include <iostream>
#include <utility>
#include "moveable.h"

int main()
{
	moveable test1;

	moveable test2(std::move(test1)); //调用转移构造函数,test1被转移成右值&&

	moveable test3(moveable::create());//调用转移赋值函数
	
	return 0;
}
