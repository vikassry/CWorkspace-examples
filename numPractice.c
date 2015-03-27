#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int numbers = 12345;
	int i, d = 10, digit;
	for (i=0; ; ++i){
		digit = numbers/pow(10,i);
		if(digit < 10)
			printf("%d\n",digit);
	}
	return 0;
}