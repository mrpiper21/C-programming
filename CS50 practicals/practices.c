#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    print("%d\n", argc);
    char *ch = argv[1];
    printf("%s", ch);
    return 0;
}