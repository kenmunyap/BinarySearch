#include "unity.h"
#include "BinarySearch.h"

void setUp(void){}

void tearDown(void){}

void test_binarySearch_for_ten_if_smaller_than_target_and_not_in_target(void){
	int arraySearch[] = {2,4,6,8,10,12,14,16,18,19};
	int startIndex = 0;
	int endIndex = 9;
	int target = 3;
	int returnValue;
	
	returnValue = binarySearch(target,arraySearch,startIndex,endIndex);
	TEST_ASSERT_EQUAL(-1,returnValue);
}

void test_binarySearch_for_ten_if_larger_than_target_and_not_in_target(void){
	int arraySearch[] = {2,4,6,8,10,12,14,16,18,19};
	int startIndex = 0;
	int endIndex = 9;
	int target = 17;
	int returnValue;
	
	returnValue = binarySearch(target,arraySearch,startIndex,endIndex);
	TEST_ASSERT_EQUAL(-1,returnValue);
}

void test_binarySearch_for_nine_if_larger_than_target_and_is_in_target(void){
	int arraySearch[] = {2,4,6,8,10,12,14,16,18};
	int startIndex = 0;
	int endIndex = 8;
	int target = 18;
	int returnValue;
	
	returnValue = binarySearch(target,arraySearch,startIndex,endIndex);
	TEST_ASSERT_EQUAL(8,returnValue);
}

void test_binarySearch_for_nine_if_smaller_than_target_and_is_in_target(void){
	int arraySearch[] = {2,4,6,8,10,12,14,16,18};
	int startIndex = 0;
	int endIndex = 8;
	int target = 2;
	int returnValue;
	
	returnValue = binarySearch(target,arraySearch,startIndex,endIndex);
	TEST_ASSERT_EQUAL(0,returnValue);
}

void test_binarySearch_for_nine_is_in_target(void){
	int arraySearch[] = {2,4,6,8,10,12,14,16,18};
	int startIndex = 0;
	int endIndex = 8;
	int target = 10;
	int returnValue;
	
	returnValue = binarySearch(target,arraySearch,startIndex,endIndex);
	TEST_ASSERT_EQUAL(4,returnValue);
}