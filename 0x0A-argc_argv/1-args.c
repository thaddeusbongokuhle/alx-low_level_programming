#include "main.h"
#include <stdio.h>
/**
 * main - program to print number of arguments
 * @argc: input arguments
 * @argv: input array arguments
 *
 * Return: a zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

