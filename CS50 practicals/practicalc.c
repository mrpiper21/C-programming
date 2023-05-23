#include <stdio.h>
#include <ctype.h>

double calc(int num_of_weeks, char type, int hours[]);

int main(void) {
    int num_of_weeks;
    printf("Number of weeks taking CS50: ");
    scanf("%d", &num_of_weeks);

    int hours[num_of_weeks];
    for (int i = 0; i < num_of_weeks; i++) {
        printf("Week %d HW Hours: ", i);
        scanf("%d", &hours[i]);
    }

    // Prompt for total or average calculation
    char type;
    while (1) {
        printf("Enter T for total hours, A for average hours per week: ");
        if (scanf(" %c", &type) == 1 && (type == 'T' || type == 'A'))
            break;
        while (getchar() != '\n');
    }
 
    // Calculate and print result
    printf("%.2lf\n", calc(num_of_weeks, type, hours));
    return 0;
}
 
double calc(int num_of_weeks, char type, int hours[]) {
    double result;
    if (type == 'T') {
        result = 0;
        for (int i = 0; i < num_of_weeks; i++) {
            result += hours[i];
        }
    } 
    else {
        double total = 0;
        for (int i = 0; i < num_of_weeks; i++) {
            total += hours[i];
        }
        result = total / num_of_weeks;
    }
    printf("%.2lf\n", result);
    return 0;
}