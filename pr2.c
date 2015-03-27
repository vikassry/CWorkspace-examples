#include <stdio.h>
#include "binary_print.h"

int main(int argc, char const *argv[])
{	
	// int a;
	int *ptr;
	printf("ptr %p\n", ptr);
	printf("*ptr %d\n", *ptr);
	printf("&ptr %p\n", &ptr);
	printf("new ptr %p\n\n", ptr);

	ptr = &ptr;
	// printf("addr of a %p\n",&a);
	// printf("value of a %d\n\n",a);

	printf("ptr %p\n", ptr);
	printf("*ptr %d\n", *ptr);
	printf("&ptr %p\n", &ptr);
	printf("new ptr %p\n", ptr);
	return 0;
}