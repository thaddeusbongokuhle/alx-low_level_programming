#include "main.h"
#include <stdio.h>
/**
 * main - program to print name of program running
 * @argc: input arguments
 * @argv: input array 
 * Return: a zero
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
