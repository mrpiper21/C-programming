#include <stdio.h>

int main(void){
    int scores[3];
    scores[0] = 57;
    scores[1] = 99;
    scores[2] = 84;

    printf("Average score: %f\n", (scores[0] + scores[1] + scores[2])/ 3.0);

    //OR

    int score[3];

    printf("SCORE: ");
    for (int i = 0; i < 3; i++){
        scanf("%d", &score[i]);
    }printf("Average score: %f\n", (score[0] + score[1] + score[2])/ 3.0);
}