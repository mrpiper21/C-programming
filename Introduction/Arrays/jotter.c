#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int pi, len;

int main(int argc, int argv[]){
    printf("%d", argc);
    int key = argv[1];
    int cyphavalue;
    char cyphar_text[50];

    char plain_text[50];
    printf("Plain text: ");
    gets(plain_text);
    len = strlen(plain_text);
    
    printf("ciphertext: ");
    
    for (pi = 0; pi < len; pi++){
        switch(plain_text[pi]) {
        case 'a':
            cyphavalue = (key + 0) % 26;
            cyphar_text[pi] = 'a' + cyphavalue;
            break;
        case 'b':
            cyphavalue = (key + 1) % 26;
            cyphar_text[pi] = 'a' + cyphavalue;
            break;
        case 'c':
            cyphavalue = (key + 2) % 26;
            cyphar_text[pi] = 'a' + cyphavalue;
            break;
        case 'd':
            cyphavalue = (key + 3) % 26;
            cyphar_text[pi] = 'a' + cyphavalue;
            break;
        //... and so on until z
        case ' ':
            cyphar_text[pi] = ' '; 
            break;
        case 'A': // repeat from A to Z
            cyphavalue = (key + 0) % 26;
            cyphar_text[pi] = 'A' + cyphavalue;
            break;
        case 'B':
            cyphavalue = (key + 1) % 26;
            cyphar_text[pi] = 'A' + cyphavalue;
            break;
        //... and so on until Z
        
        }
        printf("%c", cyphar_text[pi]);
    }
    
    return 0;
}