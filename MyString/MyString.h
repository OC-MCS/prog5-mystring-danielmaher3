#pragma once
// MyString class declaration goes here

#include <iostream>
using namespace std;

class MyString
{
	private:
		char *ptr;
	public:
		MyString();					   // Constructor
		MyString(const MyString &str); // Copy Construcotor
		MyString(const char str[]);   // Constructor
		~MyString();				   // Destructor
		MyString operator=(const MyString &str);	// Overload the = operator
		MyString operator+(MyString str);			// Overload the + operator
		bool operator==(MyString str);			    // Overload the == operator
		const char* c_str();
};

ostream &operator<<(ostream &strm, MyString &str);