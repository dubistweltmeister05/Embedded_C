/*
 * main.c
 *
 *  Created on: Feb 16, 2024
 *      Author: wardawg
 */

#include <stdio.h>
int main()
{

	char a1 = 'A';
	char a2 = 'p';
	char a3 = 'p';
	char a4 = 'l';
	char a5 = 'e';
	char a6 = ':';
	char a7 = ')';

	unsigned long long int addressOfA1 = (unsigned long long int)&a1;

	printf("Address of the variable a1  is:- %p\n", &a1);
	printf("Address of the variable a2  is:- %p\n", &a2);
	printf("Address of the variable a3  is:- %p\n", &a3);
	printf("Address of the variable a4  is:- %p\n", &a4);
	printf("Address of the variable a5  is:- %p\n", &a5);
	printf("Address of the variable a6  is:- %p\n", &a6);
	printf("Address of the variable a7  is:- %p\n", &a7);
}
