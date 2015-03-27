#include <stdio.h>
#define TRUE 1

void clear_buffer(void){
    int ch;
    while((ch = getchar())!='\n' && ch!=EOF);
} 

int main()
{
    int ch;
    int i;
    for(i=0;i<5;i++){
        printf("\nsingle char please - " ); 
        ch = getchar();
        clear_buffer();
        printf("%c - %d", ch, ch );
    } 
}    