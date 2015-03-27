#include "pointerPractise.h"

int filter(int *array, int length, int threshold, int *result_array){
	int i;
	int j=0;
	int len=0;
	for(i=0; i<length; i++){
		if(array[i]>threshold){
			result_array[j] = array[i];
			j++; len++;
		}
	}
	return len;
}