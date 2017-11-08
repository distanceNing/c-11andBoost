#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <assert.h>
#include <iostream>
class MyString
{
public:
	MyString() :length_(0), contents_(NULL) {}
	MyString(const char* contents) {
		init(contents);
	}
	//÷ª «∞·“∆
	MyString(MyString &&rv)noexcept :contents_(rv.contents_),length_(rv.length_)  {
		std::cout << "MyString(MyString &&rv)" << std::endl;
		rv.contents_ = NULL;
		rv.length_ = 0;
	}

	MyString(const MyString &rv);
	void init(const size_t length, const char *contents);
	void init(const char *contents);

	MyString operator=(const MyString& rv);

	MyString operator=(MyString&& rv)
	{
		std::cout << "operator=(MyString &&rv)" << std::endl;
		if (this != &rv)
		{
			delete[] contents_;
			contents_ = rv.contents_;
			length_ = rv.length_;
			rv.contents_ = NULL;
			rv.length_ = 0;
		}
		return *this;
	}

	const char* getContents() const
	{
		return contents_;
	}

	size_t getLength() const
	{
		return length_;
	}

	
	
	~MyString();
private:
	char *contents_;
	size_t length_;

};

#endif // !_MYSTRING_H_
