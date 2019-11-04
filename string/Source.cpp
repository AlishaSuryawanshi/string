#include<iostream>
#include "String.h"

using namespace std;


int main()
{
	String s("Hello"), s2("World");

	s = s2;

	s.print();


	cin.get();
	return 0;
}