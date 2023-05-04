#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char argv[]){
    //argc = strlen(argv);
    char replacements[] = {'6', '3', '1', '0', 'u'};
    char comp[] = {'a', 'e', 'i', 'o', 'u'};
    
    for (int i = 0; i < argc; i++){
        for (int j = 0; j < 5; j++){
            if (argv[i] == comp[j]){
                argv[i] = replacements[j];
            } else {
                printf("The character must be a lowercase letter of a vowel!");
                continue;
            }
        }
        printf("%s", argv[i]);
    }
}