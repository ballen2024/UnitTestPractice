/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ab");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simplest_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty_string)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, has_special_characters)
{
    Practice obj;
    bool actual = obj.isPalindrome("!@$@!");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_already_sorted)
{
    Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
	obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 3);
	ASSERT_EQ(second, 2);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, has_duplicate_values)
{
    Practice obj;
	int first = 1;
	int second = 10;
	int third = 10;
	obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 10);
	ASSERT_EQ(second, 10);
	ASSERT_EQ(third, 1);
}

TEST(PracticeTest, has_negative_values)
{
    Practice obj;
	int first = -10;
	int second = -10000;
	int third = 1;
	obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 1);
	ASSERT_EQ(second, -10);
	ASSERT_EQ(third, -10000);
}

TEST(PracticeTest, first_less_than_third)
{
    Practice obj;
	int first = 5;
	int second = 8;
	int third = 10;
	obj.sortDescending(first, second, third);
    ASSERT_EQ(first, 10);
	ASSERT_EQ(second, 8);
	ASSERT_EQ(third, 5);
}