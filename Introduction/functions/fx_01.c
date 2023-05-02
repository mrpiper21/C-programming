#include <stdio.h>

// Function declarations
// return_type name(argument-list
//a function that adds two integers#
int add_two_int(int a, int b);

// a function that multiply two floating point numbers
float mult_two_floats(float x, float y);

//function definition
int add_two_int(int a, int b){
    int sum; // declare sum
     sum = a + b; // add the numbers
    return sum; // give the result back
}

float mult_two_floats(float x, float y){
    return x * y;
}

int add(int b, int c);
int add(int b, int c){
    int sum = 0;
    if (b > 0){
        for (int i = 0; i < b; sum++, i++);
    }else{
        for (int i = 0; i < 0; sum--, i++)    
    }if (c > 0){
        for (int i = 0; i < c; sum++, i++);
    }else{
        for (int i = 0; i < 0; sum--, i++);
    }
    return sum;
}