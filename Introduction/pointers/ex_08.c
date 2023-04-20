/*Pointers to short and char*/
#include <stdio.h>

int main(void){
    short s;
    short *ps = &s;
    char c;
    char *pc = &c;

    printf("Content of ps before: %d\n", ps);
    ps = ps + 1;
    printf("Content of ps after; %d\n", ps);

    printf("Content of pc before: %d\n", pc);
    pc = pc + 1;
    printf("content of pc after: %d\n", pc);

    return (0);
}