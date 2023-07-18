#include <stdio.h>
/**
 * main - printing alphABET
 * Return: always (0)
 *
 */
int main(void)
{
	char lowercasealphabet = 'a';
	char alphabet = 'A';

	while (lowercasealphabet <= 'z')
	{
		putchar(lowercasealphabet);
		lowercasealphabet++;
	}
	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
