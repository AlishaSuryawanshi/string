#include "String.h"

void String::StrCopy(char * Buffer)
{
	this->Buffer = new char[Size];

	for (int i = 0; i <= Size; i++)
	{
		this->Buffer[i] = Buffer[i];
	}
}

void String::CalculateSize(char * Buffer)
{
	int i;
	for (i = 0; Buffer[i] != '\0'; i++);
	Size = i;
}

String::String()
{
}

String::~String()
{
	delete Buffer;
}

String::String(char * charStr)
{
	CalculateSize(charStr);
	StrCopy(charStr);
}

int String::GetSize()
{
	return Size;
}

void String::ToUpper()
{
	for (int i = 0; Buffer[i] != '\0'; i++)
		if (Buffer[i] >= 97)
			Buffer[i] = Buffer[i] - 32;
}

void String::operator=(char * str)
{
	delete Buffer;
	CalculateSize(str);
	StrCopy(str);
}

void String::operator=(String Source)
{
	Size = Source.Size;
	delete Buffer;
	StrCopy(Source.Buffer);
}



void String::print()
{
	std::cout << Buffer << std::endl;
}

String String::operator+(String s2)
{
	char* Temp = new char[Size + s2.Size - 1];

	for (int i = 0; i < Size; i++)
		Temp[i] = Buffer[i];

	for (int i = 0; i <= s2.Size; i++)
		Temp[Size + i] = s2.Buffer[i];

	String ToReturn(Temp);
	return ToReturn;
}