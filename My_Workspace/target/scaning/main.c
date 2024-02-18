/*
 * main.c
 *
 *  Created on: Feb 18, 2024
 *      Author: wardawg
 */
#include <stdio.h>
int main()
{
	printf("Enter the 6 characters of your choice\n");
	char arr[6];
	for (int i = 0; i < 6; i++)
	{
		scanf("%c", &arr[i]);
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
