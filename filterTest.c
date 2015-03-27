#include "expr_assert.h"
#include "pointerPractise.h"
#include <stdlib.h>

void test_filter_filters_the_array(){
	int scores[]={100,90,80};
	int *filtered;
	int size_of_filtered;
	filtered = (int *)malloc(sizeof(int));
	size_of_filtered=filter(scores,3,85,filtered);
	assert(size_of_filtered==2);
	assert(filtered[0]==100);
	assert(filtered[1]==90);
}

void test_filter_filters_the_array_(){
	int scores[]={100,30,45,80,46};
	int *filtered;
	int size_of_filtered;
	filtered = (int *)malloc(sizeof(int));
	size_of_filtered=filter(scores,5,45,filtered);
	assert(size_of_filtered==3);
	assert(filtered[0]==100);
	assert(filtered[1]==80);
	assert(filtered[2]==46);
}