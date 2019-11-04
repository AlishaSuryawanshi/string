#include<iostream>
#include "string.h"

using namespace std;


int main()
{
	String s("Hello");
	s.ToUpper();
	s.print();
	String s2(" World");
	s2.ToUpper();
	s2.print();

	String ss = s + s2;
	ss.print();

	cin.get();
	return 0;
}