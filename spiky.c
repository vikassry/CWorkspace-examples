#include <stdio.h>

int main(){
	unsigned int x = -23;
	char a = 'a';
	unsigned char b= 'a';
	signed char  c= 'a';
	int y = -33;
	// if(x < 0)
	//     printf("one\n");
	// else
	    printf("two\n");
	if (y < 0)
	    printf("three\n");
	else
	    printf("four\n");
	if(x==23)
		printf("yessss" );
	printf("%d %d\n",sizeof(x), sizeof(y) );
	printf("%d %d %d\n",sizeof(a),sizeof(b),sizeof(c));
	return 0;
}