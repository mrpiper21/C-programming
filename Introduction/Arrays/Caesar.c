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
    char plain_text[50];
    for (int i = 0; i < 10; i++){
        if (num[i] == argv[1]){
            key = i;
            printf("Plain text: ");
            gets(plain_text);
            len = strlen(plain_text);
            printf("ciphertext: ");
            for (pi = 0; pi < len; pi++){
                for (int j = 0; j < 26; j++){
                    if (plain_text[pi] == alphabets[j]){
                        cyphavalue = (key + j) % 26;
                        cyphar_text[pi]= alphabets[cyphavalue];
                    } if (plain_text[pi] == upper[j]){
                        cyphavalue = (key + j) % 26;
                        cyphar_text[pi]= upper[cyphavalue]; 
                    } else {
                        cyphar_text[pi] = plain_text[j];
                    }
                }
                printf("%c", cyphar_text[pi]);
            }
        } else {
            printf("%d\n", *argv[1]);
            printf("Value must be a digit!\n");
            break;
        }
    }
    return 0;
}

