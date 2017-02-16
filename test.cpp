#include "process.hpp"
#include <gmock/gmock.h>


using namespace ::testing;

class DatabaseMock: public IDatabase
{
public:
	MOCK_METHOD0(getValue, castTest());
};


TEST(test, simpletestone)
{
	StrictMock<DatabaseMock> strick_database;
	processor po1(strick_database);
	castTest te1(Type1_2);
	EXPECT_CALL(strick_database, getValue()).WillRepeatedly(Return(te1));
	EXPECT_TRUE(po1.getResult());
}

