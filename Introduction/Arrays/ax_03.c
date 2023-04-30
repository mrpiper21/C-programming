#include <stdio.h>

//constant
const int C = 3;

//prototype
float average(int lenght, int array[]);

int main(){
    //Get scores
    int scores[C];
    printf("Score: ");
    for (int i = 0; i < C; i++){
        scanf("%d", &scores[i]);
    }
    //print average
    printf("Average: %f\n", average(C, scores));
}

float average(int lenght, int array[])
{
    // calculate average
    int sum = 0;
    for (int i = 0; i < lenght; i++){
        sum += array[i];
    }
    return (sum / (float) lenght);
}