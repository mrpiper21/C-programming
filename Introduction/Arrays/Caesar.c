#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

//int value[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
char alphabets[] = {"abcdefghijklmnopqrstuvwxyz"};
char upper[] = {"ABCDEFGHIjkLMNOPQRSTUVWXYZ"};



int num[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
int pi, len;

int main(int argc, char *argv[]){
    int key, cyphavalue;
    char cyphar_text[50];
    
    for (int i = 0; i < 10; i++){
        if (*argv[1] == num[i]){
            key = i;
        }
    }

    char plain_text[50];
    printf("Plain text: ");
    gets(plain_text);
    len = strlen(plain_text);
    
    printf("ciphertext: ");
    for (pi = 0; pi < len; pi++){
        for (int i = 0; i < 26; i++){
            if (plain_text[pi] == alphabets[i]){
                cyphavalue = (key + i) % 26;
                cyphar_text[pi]= alphabets[cyphavalue];
            } else if (plain_text[pi] == upper[i]){
                cyphavalue = (key + i) % 26;
                cyphar_text[pi]= upper[cyphavalue]; 
            } else {
                continue;
            }
        }printf("%c", cyphar_text[pi]);
    }
    
    return 0;
}

