#include <stdio.h>
void hi(){

}
int main(void){
	int a[]={1,2,3,4,5};
	int *b=(int []){5,6,7,8,9};

	printf("main %p  %p\n",&main,&hi);
	printf("addres of of a %p\n\n", &a);
	printf("value of b %p\n", b);
	printf("addres of of b %p\n\n", &b);

	printf(" b[4]%p\n", &b[4]);
	printf(" b[5]%p\n", &b[5]);
	printf(" b[6]%p\n", &b[6]);
	printf(" b[7]%p\n", &b[7]);
	printf(" b[8]%p\n", &b[47]);
printf("--------------\n");
	printf(" a[0]%p\n", &a[0]);
	printf(" a[1]%p\n", &a[1]);
	printf(" a[2]%p\n", &a[2]);
	printf(" a[3]%p\n", &a[3]);

	printf(" a[4]%p\n", &a[4]);
	printf(" a[5]%p\n", &a[5]);
	printf(" a[6]%p\n", &a[6]);
	printf(" a[7]%p\n", &a[7]);
	printf(" a[8]%p\n", &a[8]);

	



	return 0;
}