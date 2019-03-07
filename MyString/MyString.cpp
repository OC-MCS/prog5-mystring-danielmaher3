// MyString implementation file

#include "MyString.h"
#include <cstring>
using namespace std;


MyString::MyString()
{
	ptr = new char;
	strcpy_s(ptr, 1, "");
}

MyString::MyString(const MyString &str)
{
	cout << "In the copy constructor :)" << endl;
	int size = strlen(str.ptr) + 1;
	ptr = new char[size];
	strcpy_s(ptr, size, str.ptr);
}

MyString::MyString(const char str[])
{
	int size = strlen(str) + 1;
	ptr = new char[size];
	strcpy_s(ptr, size, str);
}

MyString::~MyString()
{
	cout << "In the destructor :(" << endl;
	delete[] ptr;
}

MyString MyString::operator=(const MyString &str)
{
	if (this != &str)
	{
		delete[] ptr;
		int size = strlen(str.ptr) + 1;
		ptr = new char[size];
		strcpy_s(ptr, size, str.ptr);
	}

	return *this;
}

MyString MyString::operator+(MyString str)
{
	MyString sum;
	int size = strlen(ptr) + strlen(str.ptr) + 1;
	sum.ptr = new char[size];
	strcpy_s(sum.ptr, size, ptr);
	strcat_s(sum.ptr, size, str.ptr);

	return sum;
}

bool MyString::operator==(MyString str)
{
	bool same;
	same = strcmp(ptr, str.ptr) == 0;

	return same;
}

const char* MyString::c_str()
{
	return ptr;
}

ostream &operator<<(ostream &strm, MyString &str)
{
	strm << str.c_str();
	return strm;
}