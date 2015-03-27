#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char *str1 = calloc(1, sizeof(char));
	printf("%p\n",str1);
	free(str1);
	str1 = calloc(2, sizeof(char));
	printf("%p\n",str1);
	free(str1);
	return 0;
}