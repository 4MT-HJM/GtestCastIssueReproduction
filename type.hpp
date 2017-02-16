#pragma once
#include<string>

typedef enum Type1
{
    Type1_1 = 0 ,
    Type1_2 = 1 ,
    Type1_3 = 2
} Type1;

class castTest
{
public:
	castTest() = default;
	castTest(Type1 input) : msg(input) {}

	operator const char () const
	{
		return 1;
	}

	operator const Type1 () const
	{
		return msg;
	}

//	operator const long long int () const
//	{
//		return 1;
//	}
private:
	Type1 msg = Type1_1;
};
