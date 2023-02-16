# include <unistd.h>
/**
 * main - fitfth entry
 * Return: 1
 */
int main(void)
{
	const char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, sizeof(str) - 1);
	return (1);
}
