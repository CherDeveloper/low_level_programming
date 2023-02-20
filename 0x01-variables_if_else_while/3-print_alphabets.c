#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then uppercase,
 * followed by a newline
 * Return: always 0 (success)
 */
int main(void)
{
	int ch;


	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	put('\n');
	return (0);
}
