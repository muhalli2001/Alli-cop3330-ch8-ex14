/*
*  UCF COP3330 Fall 2021 Assignment 5 Solution
*  Copyright 2021 Muhammad Alli
*/

#include "std_lib_facilities.h"

void sample(const int a)
{

    printf("%d\n", a);
    int b = a+1;
    printf("i made b from a!: %d",b);

}


int main()
{

    int c = 12;
    sample(c);
    
    return 0;
}