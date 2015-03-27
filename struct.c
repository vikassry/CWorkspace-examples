#include <stdio.h>
#include <stdlib.h>
typedef struct rectangle rect ;

struct rectangle{
	int height;
	int width;
	char r;
};

int main(int argc, char const *argv[])
{	rect *r1;
	rect r2;
	rect r3;
	(*r1).height=1;
	r1->width = 98;
	printf("%p\n",r2);
	printf("%p\n",r3);
	return 0;
}