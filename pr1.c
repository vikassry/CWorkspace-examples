#include <stdio.h>
#include "binary_print.h"

int main(){
	char c = 'c';
	char ch = 'f';
	int a = 5;
	int a1 = 6;
	float f= 6.6;
	float f1 = 6.4;
	double d = 5.6;
	double d1 = 2.53;
	double d2 = 9.9;
	char *ptr = &d1;
	printf("\n main %p\n",&main);

	// print_bytes_between(ptr, ptr+50);

	printf("\nchar    %d\n",&c ); 
	printf("char    %d\n\n",&ch); 

	printf("int     %d\n",&a );
	printf("int     %d\n\n",&a1 );

	printf("float   %d\n",&f );
	printf("float   %d\n\n",&f1 );

	printf("double  %d\n",&d );
	printf("double  %d\n",&d1 );
	printf("double  %d\n",&d2 );
	printf("\n %d %d\n",ch+1, ch+2 );	
}