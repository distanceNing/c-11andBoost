#include "Foo.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

 struct TEST_STRUCT
{
	TEST_STRUCT(int x, int y) :x_(x), y_(y) {}
	int x_;
	int y_;
};


int amain()
{
	char str[] = "hello world";
	char* const p1 = str;  //ָ��Ϊ����
						   //p1++;  
	*p1 = 'H';

	//��ָ��Ϊ����
	const char* p2 = str;  
	p2++;
	//*p2='H';

	//ָ�����ָ�ﶼΪ���� �����޸�
	const char* const p3 = str; 

	//�����������ã�T*
	vector<int>test = { 0,1,2,3 };
	const vector<int>::iterator p_iter1 = test.begin(); //iteratorΪ����  
	//vector<int>::iterator const p_iter1 = test.begin();
	//p_iter1++;
	*p_iter1 = 10;

	vector<int>::const_iterator p_iter2 = test.begin();//*p_iter2Ϊ����
	p_iter2++;
	//*p_iter2 = 10;

	//������������initializer_listΪ����
	//�����㷨Ҳ���������Ĳ�����
	//Foo foo1(1, 2);
	//
	//Foo foo2{ 1,2,34,5,6,7 };
	//
	//Foo foo3{ 12,34,23 };
	//
	//Foo foo4(1, 2, 3);
	//
	//Foo foo5(4,2);
	//��û��explicit�Ὣ1Ĭ��ת��ΪFoo(int x, int y = 0)
	//���Ϻ���ͨ������
	//foo5 = 1;
	//cout << min({ 1,23,4,5,6,5 }) << endl;
	//
	//cout << min({ "aaa", "ccc", "dddd" }) << endl;
	//
	//cout << minmax({ 1,2,3,46,7,8,9,0,6456 }).first << endl;

	cout << "sizeof(int) : " << sizeof(int) << endl;
	cout << "sizeof(string) : " << sizeof(string) << endl;
	cout << "sizeof(long) : " << sizeof(long) << endl;
	cout << "sizeof(Foo) : "<<sizeof(Foo) << endl;
	
	Foo* ptr = new Foo;
	delete ptr;
	
	Foo* ptr2 = new Foo[5];
	delete[] ptr2;


	//vector<TEST_STRUCT> vec{ TEST_STRUCT(1,23) };
	//for (const auto & i : vec)
	//{
	//	cout << i.x_ << " "<<i.y_<<"\t";
	//}

	vector<int> ivec{ 1,2,34,5,6,7,7 };
	//�������е��������Ϳ�����ʽת��ΪFooʱ����������дfor
	//for (const Foo& i : ivec)
	//{
	//}
	return 0;
}