#include "main.h"
/**
 * main - program to print name of program running
 * @argc: input arguments
 * @argv: input array 
 * Return: a zero
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
