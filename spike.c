#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef int number;
typedef float measure;
typedef char * Text;
typedef int(*calc)(int, int);

int addition(int a, int b){
	return a+b;
}

int main(){
	Text name,gender, nam1, nam2;
	measure weight, height,t;
	number mark, result,r;
	char c;
	calc add;
	char *nam = "";
	
	weight= 65.9;
	gender="male";
	height = 172.45;
	mark=100;
	add = addition;
	result = add(1,3);
	result = (weight>65.9);
	nam1="vikas"; 
	// strcpy(nam1,nam2);
	// nam2 = "vikas";
	printf("---%s\n",nam1);
	printf(" %p\n",nam1);
	printf("%s\n",nam2);
	printf(" %p\n",nam2);
	nam1="vik";
	printf(">>%s\n",nam1);
	printf("  %p\n",nam1);

	c = (char )mark;
	printf("%c\n", c); 

	return 0;
}

