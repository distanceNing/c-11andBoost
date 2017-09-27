#ifndef _MOVEABLE_H_
#define _MOVEABLE_H_
class moveable
{
public:
	moveable(){}

	moveable(moveable&& other)		//转移构造函数
	{
		std::swap(x, other.x);
	}

	moveable& operator=(moveable&& other)
	{
		std::swap(x, other.x);
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
#endif // !_MOVEABLE_H_




