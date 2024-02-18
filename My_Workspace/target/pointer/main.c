/*
 * main.c
 *
 *  Created on: Feb 18, 2024
 *      Author: wardawg
 */

#include <stdio.h>

int main()
{
    char c = 100;
    printf("The data at the variable c is %ld\n", c);
    printf("The address of the variable c is %ld\n", &c);
    char *p = &c;
    printf("The data at the pointer is : -  %d\n", *p);
    *p = 65;
    printf("The data at the pointer is : -  %d\n", *p);
}
