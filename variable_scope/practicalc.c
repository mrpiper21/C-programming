#include <stdio.h>
#include <ctype.h>

double calc(int NOW, char x, int array[]);
char prompt();

int main(void){
    int num_of_weeks;
    printf("Number of weeks taking cs50: ");
    scanf("%d", &num_of_weeks);

    int hours[num_of_weeks];

    for (int i = 0; i < num_of_weeks; i++){
        printf("week %d HW Hours: ", i);
        scanf("%d", hours[i]);
    }

    char nb = prompt();
   // char ch;
    //printf("Enter T for total hours, A for average hours per week: ");
    //scanf("%c", &ch);
    calc(num_of_weeks, prompt(), hours);
}

double calc(int NOW, char x, int array[]){
    double sum = 0;
    if (x == "T"){
        for (int i =0; i < NOW; i++){
            sum = sum + array[i];
        }
        printf("%lf", sum);
    }
    if (x == "A"){
        for (int i = 0; i < NOW; i++){
            sum = sum + array[i];
        }
        printf("%lf", sum / NOW);
    }
    return (0);
}

char prompt(){
    char ch;
    printf("Enter T for total hours, A for average hours per week: ");
    fgets("%c", &ch);
    return (ch);
}