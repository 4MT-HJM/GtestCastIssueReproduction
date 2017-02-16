#pragma once
#include "type.hpp"

class IDatabase
{
public:
	virtual castTest getValue() = 0;
	~IDatabase() = default;
};
