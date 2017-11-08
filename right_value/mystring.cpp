#include "mystring.h"
#include <cstring>

MyString::MyString(const MyString &rv)
{
	init(rv.length_, rv.contents_);
}

MyString MyString::operator=(const MyString& rv)
{
	if (length_ >= rv.length_)
	{
		memset(contents_, '\0', length_);
		memcpy(contents_, rv.contents_, rv.length_);
		length_ = rv.length_;
	}
	else
	{
		if (contents_ != NULL)
			delete[] contents_;
		init(rv.length_, rv.contents_);
	}
	return *this;
}

void MyString::init(const size_t length, const char *contents)
{
	assert(contents != NULL&&length >= 0);
	length_ = length;
	contents_ = new char[length + 1];
	int i = 0;
	while (contents[i])
	{
		contents_[i] = contents[i];
		i++;
	}
	contents_[length] = '\0';
}

void MyString::init(const char  *contents)
{
	assert(contents != NULL);
	int i = 0;
	while (*(contents + i++) != '\0'){}
	init(i - 1, contents);
}

MyString::~MyString()
{
	if (contents_)
	{
		delete[]contents_;
		contents_ = NULL;
	}
}