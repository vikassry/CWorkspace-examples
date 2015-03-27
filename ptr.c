#include <stdio.h>

int main(){
	int *ptr;
	int a = 4;
	ptr = &a;
	printf("%p\n", *ptr);
	return 0;
};