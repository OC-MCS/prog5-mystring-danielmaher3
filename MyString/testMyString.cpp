// test driver code goes here
#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
	
	cout << "I am a test :)" << endl;
	
	MyString s1;
	MyString s2 = ":)";
	MyString s3(s2);
	
	cout << "First:" << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;
	
	MyString s4 = s1 + s2;

	cout << "Second:" << endl;
	cout << "s1 + s2: " << s4 << endl;

	s4 = s3 + s1;
	cout << "s3 + s1: " << s4 << endl;

	s4 = s2 + s3;
	cout << "s2 + s3: "<< s4 << endl;
	
	MyString s5 = s2;

	if (s5 == s1)
	{
		cout << ":), == works" << endl;
	}
	else if (s2 == s5)
	{
		cout << ":[, predictable" << endl;
	}
	else
	{
		cout << ":(, ++ did not work" << endl;
	}


	return 0;
}
