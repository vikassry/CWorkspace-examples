#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int *array;
	char *string;
	array = (int *)malloc(sizeof(int)*4);
	string = array;
	string[0]=65;
	string[1]=0;
	string[2]=0;
	string[3]=0;

	printf("initial value of array : %d\n", array);
	printf("value of string[0] : %d\n", string[0]);
	printf("value of array[0] : %d\n", array[0]);

	printf("value of string : %p\n", string+1);
	printf("value of string : %p\n", array+1);
	return 0;
}