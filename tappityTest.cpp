/**
 * Unit Test suite
**/

#include <gtest/gtest.h>
#include "tappity.h"
 
class tappityTest : public ::testing::Test
{
	protected:
		tappityTest(){} 
		virtual ~tappityTest(){} 
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(tappityTest, acc_100){
    tappity myTap("Hola world");
    myTap.entry("Hola world");
    int acc = myTap.accuracy();
    ASSERT_EQ(acc, 100.0);
}

TEST(tappityTest, acc_50){
    tappity myTap("Hola world");
    myTap.entry("Hola eptkf");
    int acc = myTap.accuracy();
    ASSERT_EQ(acc, 50.0);
}

TEST(tappityTest, acc_0){
    tappity myTap("Hola world");
    myTap.entry("Jiksveptkf");
    int acc = myTap.accuracy();
    ASSERT_EQ(acc, 0.0);
}

TEST(tapityTest, same_size){
	tappity myTap("hello");
	myTap.entry("world");
	int acc = myTap.length_difference();
	ASSERT(acc, 0);
}

TEST(tapityTest, ref_bigger){
	tappity myTap("hola world");
	myTap.entry("world");
	int acc = myTap.length_difference();
	ASSERT(acc, 5);
}

//Supposed to fail since function used absolute value and wont give a negative number
TEST(tapityTest, input_bigger_neg){
	tappity myTap("world");
	myTap.entry("hola world")
	int acc = myTap.length_difference();
	ASSERT(acc, -5);
}