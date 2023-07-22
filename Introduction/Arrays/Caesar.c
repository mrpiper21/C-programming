#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char upper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(int argc, char* argv[]) {
    int key;
    char cyphar_text[50];

    key = atoi(argv[argc - 1]);

    if (key >= 1 && key <= 26) {
        char plain_text[50];

        printf("Plain text: ");
        fgets(plain_text, sizeof(plain_text), stdin);
        plain_text[strcspn(plain_text, "n")] = '0';

        size_t len = strlen(plain_text) + 1;

        printf("Ciphertext: ");
        for (size_t pi = 0; pi < len; pi++) {
            if (plain_text[pi] >= 'A' && plain_text[pi] <= 'Z') {
                int cyphavalue = (key + (plain_text[pi] - 'A')) % 26;
                cyphar_text[pi] = upper[cyphavalue];
            } else if (plain_text[pi] >= 'a' && plain_text[pi] <= 'z') {
                int cyphavalue = (key + (plain_text[pi] - 'a')) % 26;
                cyphar_text[pi] = alphabets[cyphavalue];
            } else {
                cyphar_text[pi] = plain_text[pi];
            }
        }

        printf("%sn", cyphar_text);
    }

    return 0;
}