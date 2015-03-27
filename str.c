#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int our_len(char *string){
	int index = 0;
	while(string[index++] != 0);
	return index;
}

int main(int argc, char const *argv[])
{	
	int i=0; double d = 5; 
	char *n = "";
	char *name;
	char *word = "aaabbccddeeffggh";
	name = (char *)malloc(sizeof(char)*16);
	// printf("word %d\n",sizeof(word));
	++i;
	printf("%d",i);
	printf("\nd %s\n",n );
	return 0;
}