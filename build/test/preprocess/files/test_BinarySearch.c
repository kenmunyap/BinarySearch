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

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)16, UNITY_DISPLAY_STYLE_INT);

}



void test_binarySearch_for_ten_if_larger_than_target_and_not_in_target(void){

 int arraySearch[] = {2,4,6,8,10,12,14,16,18,19};

 int startIndex = 0;

 int endIndex = 9;

 int target = 17;

 int returnValue;



 returnValue = binarySearch(target,arraySearch,startIndex,endIndex);

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)27, UNITY_DISPLAY_STYLE_INT);

}



void test_binarySearch_for_nine_if_larger_than_target_and_is_in_target(void){

 int arraySearch[] = {2,4,6,8,10,12,14,16,18};

 int startIndex = 0;

 int endIndex = 8;

 int target = 10;

 int returnValue;



 returnValue = binarySearch(target,arraySearch,startIndex,endIndex);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)38, UNITY_DISPLAY_STYLE_INT);

}



void test_binarySearch_for_nine_if_smaller_than_target_and_is_in_target(void){

 int arraySearch[] = {2,4,6,8,10,12,14,16,18};

 int startIndex = 0;

 int endIndex = 8;

 int target = 2;

 int returnValue;



 returnValue = binarySearch(target,arraySearch,startIndex,endIndex);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT);

}



void test_binarySearch_for_nine_is_in_target(void){

 int arraySearch[] = {2,4,6,8,10,12,14,16,18};

 int startIndex = 0;

 int endIndex = 8;

 int target = 10;

 int returnValue;



 returnValue = binarySearch(target,arraySearch,startIndex,endIndex);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((returnValue)), (((void *)0)), (_U_UINT)60, UNITY_DISPLAY_STYLE_INT);

}
