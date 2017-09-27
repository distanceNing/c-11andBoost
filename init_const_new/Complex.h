#ifndef _COMPLEX_H_
#define _COMPLEX_H_
class Complex
{
public:
	Complex(double real, double imag = 0) :real_(real), imag_(imag) {}

	//const 成员函数 保证不会改变成员变量 non const 成员函数则可以
	//操作可能只是读
	//让编译器来把把关 看我是否违反规则
	//const object也只能调用const成员函数 不能调用non const成员函数
	//non const object 皆可调用
	double getReal()const
	{
		//用mutable修饰的成员变量总是可以修改，即使在const成员函数中
		non_const_ = -1;
		return real_;
	}

	double getImag()const
	{
		return imag_;
	}

	~Complex() {}

private:
	double real_;

	double imag_;

	mutable int non_const_;
};


#endif // !_COMPLEX_H_

