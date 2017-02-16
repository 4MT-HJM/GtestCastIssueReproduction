#pragma once
#include "type.hpp"
#include "getValue.hpp"

class processor
{
public:
	processor(IDatabase & input):db(input){}
	bool getResult()
	{
		const Type1 ty1 = db.getValue();
		const char ch1 = db.getValue();
		if (ty1 == Type1_2 && ch1 == 1) return false;
		return true;
	}
private:
	IDatabase & db;
};
