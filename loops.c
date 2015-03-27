#include <stdio.h>

int main(){
	int r;
	float a=2.0;
	int b = 3;
	int c = 4;
	double d = 3.4;
	int e= 2;
	double f = 4.8;
	int array[] = {1,2,3,4};
	int addr = &a;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(d));
	printf("%d\n", sizeof(e));
	printf("%d\n", addr);
	printf("%d\n\n", array);

	printf("int    %d\n", r);
	printf("float  %d\n", &a);
	printf("int    %d\n", &b);
	printf("int    %d\n", &c);
	printf("double %d\n", &d);
	printf("int    %d\n", &e);
	printf("double %d\n", &f);
	printf("array  %d\n", array);


	return 0;
}