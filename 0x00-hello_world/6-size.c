#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if executed properly
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n" sizeof(char));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	return (0);
}
