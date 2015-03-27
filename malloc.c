#include <stdio.h>
#include <stdlib.h>

int *memory_created() {
	int *a;
	a=(int *)malloc(sizeof(int));
	return a;
}

int main(void) {
	int *a = malloc(sizeof(int)*2);
	int *b = calloc(2,sizeof(int));
	int *c = malloc(sizeof(int)*6);
	
	printf("c[0]  %p %d\n",&c[0],c[0] );
	printf("c[1]  %p %d\n",&c[1],c[1] );
	printf("c[2]  %p %d\n",&c[2],c[2] );
	printf("c[3]  %p %d\n",&c[3],c[3] );
	printf("c[4]  %p %d\n",&c[4],c[4] );
	printf("c[5]  %p %d\n",&c[5],c[5] );

	

	printf("\na[0]  %p %d\n",&a[0],a[0] );
	printf("a[1]  %p %d\n",&a[1],a[1] );
	printf("b[0]  %p %d\n",&b[0],b[0] );
	printf("b[1]  %p %d\n",&b[1],b[1] );
	printf("c[0]  %p %d\n",&c[0],c[0] );
	printf("c[1]  %p %d\n",&c[1],c[1] );
	printf("c[2]  %p %d\n",&c[2],c[2] );



	// a=memory_created();
	// printf("Value of A is: %p\n", a );
	// *a=10;
	// printf("*A has been assigned the value %d\n",*a);
	// b=memory_created();
	// *b=20;
	// printf("*A contains the value %d\n",*a);
	// printf("*B contains the value %d\n",*b);
	// free(a);
	// free(b);
	// printf("Value of A is: %p\n", a );
	// printf("*A after freeing memory is %d\n",*a);


	return 0;
}