#include <stdio.h>
#include "BinarySearch.h"

int binarySearch(int target,int array[],int startIndex,int endIndex){
		int searchIndex;
		int startValue = startIndex;
		int endValue = endIndex;
		searchIndex = ((endIndex-startIndex)/2)+startIndex;

		if(target == array[searchIndex]){
					return searchIndex;
		}else if(target>array[searchIndex]){
			startIndex = searchIndex;
				if(target == array[searchIndex+1]){
					return searchIndex+1;
				}else if(startValue == searchIndex  && target != array[searchIndex]){
					return -1;
				}
			binarySearch(target,array,startIndex,endIndex);
		}else if(target<array[searchIndex]){
			endIndex = searchIndex;
				if(endValue == searchIndex  && target != array[searchIndex]){
						return -1;
				}
			binarySearch(target,array,startIndex,endIndex);
			
		}
		
		

}