#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: number of arguments
 * @argv: array that contain arguments
 * Description: Prints all the arguments passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
