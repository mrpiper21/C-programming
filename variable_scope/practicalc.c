#include <stdio.h>
#include <ctype.h>

double calc(int NOW, int array[]);

int main(void){
    int num_of_weeks;
    printf("Number of weeks taking cs50: ");
    scanf("%d", &num_of_weeks);

    int weeks[num_of_weeks];

    for (int i = 0; i < num_of_weeks; i++){
        printf("week %d HW Hours: ", i);
        scanf("%d", weeks + 1);
    }

    char ch;
    printf("Enter T for total hours, A for average hours per week: ");
    scanf("%c", &ch);
    calc(num_of_weeks, weeks);
}

double calc(int NOW, int array[]){
    char ch;
    do {
        printf("Enter T for total hours, A for average hours per week: ");
        scanf("%c", &ch);
    } while (ch == "T" || ch == "A");
    char A = toupper(ch);
    int sum = 0;
    if (ch == "T"){
        for (int i =0; i < NOW; i++){
            sum += array[i];
        }
        return ("%d", sum);
    }
    if (ch == "A"){
        for (int i = 0; i < NOW; i++){
            sum += array[i];
        }
        return ("%d", sum / NOW);
    }
}