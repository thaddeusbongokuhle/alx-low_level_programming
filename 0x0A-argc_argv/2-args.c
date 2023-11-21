#include <stdio.h>
#include "main.h"
/**
 * main - program to print all arguments
 * @argc: input arguments
 * @argv: input array
 *
 * Return: a zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
