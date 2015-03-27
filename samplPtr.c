#include <stdio.h>
#include <stdlib.h>
int create_memory(int *);

int create_memory(int *array){
	int *r;
	printf("Value of array %p\n", array);
	printf("address in create_memory %p\n", &array);
	r = (int *)malloc(sizeof(int)*2);
	r[1] = 3;
	r[0] = 2;
}

int main(int argc, char const *argv[])
{	
	int *arr;
	int **arrr;
	printf("Value of arr in main %p\n", arr);
	printf("Adress in main %p\n", &arr);
	create_memory(arr);
	printf("%d\n", sizeof(**arrr));
	return 0;
}