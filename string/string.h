#pragma once
#include<iostream>

class String
{
private:
	char* Buffer;
	int Size;
	void StrCopy(char *);
	void CalculateSize(char*);
public:
	String();
	~String();
	String(char*);
	int GetSize();
	void ToUpper();
	void operator=(char*);
	void operator=(String);
	//void operator=(String);
	//friend std::ofstream& operator<<(String);
	void print();
	String operator+(String);
};