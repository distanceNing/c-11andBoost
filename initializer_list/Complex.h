#ifndef _COMPLEX_H_
#define _COMPLEX_H_
class Complex
{
public:
	Complex(double real, double imag = 0) :real_(real), imag_(imag) {}

	//const ��Ա���� ��֤����ı��Ա���� non const ��Ա���������
	//��������ֻ�Ƕ�
	//�ñ��������Ѱѹ� �����Ƿ�Υ������
	//const objectҲֻ�ܵ���const��Ա���� ���ܵ���non const��Ա����
	//non const object �Կɵ���
	double getReal()const
	{
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
};


#endif // !_COMPLEX_H_

