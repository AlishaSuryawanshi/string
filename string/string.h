#pragma once
#include<iostream>

	class String
{
private:
	char* Buffer;
	int Size;
public:
	String();
	~String();
	String(char*);
	int GetSize();
	void ToUpper();
	void operator=(char*);
	//void operator=(String);
	//friend std::ofstream& operator<<(String);
	void print();
	String operator+(String);
};
String.h
Displaying Source.cpp.