#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer of arrays
 * Description: adds positvie arguments to main
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int add = 0, x = 0, i = 0;
	int num[argc];
	char s[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-;,_";

	for (x = 0; x < argc; x++)
	{
		num[x] = atoi(argv[x]);
		if (atoi(argv[x]) != 0 && argv[x] != 0)
		{
			add += num[x];
			continue;
		}
		for (i = 0; i < 56; i++)
		{
			if (strchr(argv[x], s[i]) && atoi(argv[x]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc < 2)
		printf("0\n");
	else
		printf("%d\n", add);
	return (0);
}
