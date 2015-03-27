#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{	int i,d;
	char b[7]={'b',' ','a','w','t','i','\0'};
	char g[]={'b',' ','\0'};
	char *r, *new;

	char name[]={'a','b','\0'};
	new = (char *)malloc(sizeof(char)*2);
	// printf("Length of name is  %d\n",strlen(name));
	strcpy(new, name);
	printf("%s\n",name);
	// printf("%s\n",new);
	printf("strcmp: %d\n", strcmp(b,"b&"));
	d='a'-32;
	printf("d %d\n",d);
	// b[4] = '\0';
	// b = (char*)realloc(b, sizeof(char)*4);
	// for(i=0; i<10; i++){
	// 	printf("b%cb\n",b[i] );
	// }
	// return 0;
}