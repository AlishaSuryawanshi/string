#include "String.h"

String::String()
{
}

String::~String()
{
	delete Buffer;
}

String::String(char * charStr)
{
	int i;
	for (i = 0; charStr[i] != '\0'; i++);

	this->Size = i;
	this->Buffer = new char[i];

	for (i = 0; i <= Size; i++)
	{
		this->Buffer[i] = charStr[i];
	}

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

void String::operator=(char * c)
{
	
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