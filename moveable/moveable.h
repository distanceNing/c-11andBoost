/* ************************************************************************
 *       Filename:  moveable.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年07月14日 08时31分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

class moveable
{
public:
	moveable()
	{}
	moveable(moveable&& other)		//转移构造函数
	{
		std::swap(x,other.x);
	}

	moveable& operator=(moveable&& other)
	{
		std::swap(x,other.x);
		return *this;
	}

	static moveable create()//在函数栈上创建临时对象,即右值,会发生转移语义
	{
		moveable obj;
		return obj;
	}
private:
	int x;
};


