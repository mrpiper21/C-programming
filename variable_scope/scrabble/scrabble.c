#include <ctype.h>
//#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char word[]);

int main(void)
{
    // Get input words from both players
    char word1[10];
    char word2[10];
    printf("Player 1: ");
    scanf("%s", word1);
    printf("Player 2: ");
    scanf("%s", word2);

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2){
        printf("Player 1 is the winner!");
        printf("\n%d\n", score1);
    } else if (score2 > score1){
        printf("Player 2 is the winner!");
        printf("\n%d\n", score2);
    } else {
        printf("it's a tie!\n");
        printf("p1: %d\np2: %d\n", score1, score2);
    }
}

int compute_score(char word[])
{
     // TODO: Compute and return score for string
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int total = 0;
    int len = strlen(word);
    int value[len];
    for (int i = 0; i < len; i++){
        for (int j = 0; j < 24; j++){
            if (isalpha(word[i])){
            word[j] = tolower(word[i]);
            }
            if (alphabet[j] == word[i]){
                value[i] = POINTS[j];
            } else {
                value[i] = 0;
            }total += value[i];
        }
    }return (total);
}
