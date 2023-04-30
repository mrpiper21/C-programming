#include <stdio.h>

int main(void){
    char s[3] = "Hi!";
    printf("%i %i %i\n", s[0], s[1], s[2]);

    char *words[] = {"Hi!", "Bye!"};
    char **string1[1];
    char **string2[1];

    string1[0] = &words[0];
    string2[0] = &words[1];
    printf("%s %s\n", *string1[0], *string2[0]);

    return (0);

}