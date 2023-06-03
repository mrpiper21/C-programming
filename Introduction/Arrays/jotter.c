#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct HashTable 
{ 
    char name[10]; 
    char number[10]; 
}; 

// Create an array of people
HashTable people[3]; 

// function to search a given name in the hash table
void searchNumberOfName(char *name) 
{ 
    // calculate the key from the given name
    int key = calculateHash(name); 
  
    // if match, print the number 
    if (strcmp(people[key].name, name) == 0) 
        printf("found %s \n", *people[key].number); 
    else
        printf("Not found \n"); 
}