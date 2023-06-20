#include "main.h"

/**
  *main - prints the alphabet, in lowercase, followed by a new line
  *
  *Description: print_alphabet - Make alphabet
  *
  *Return: void
  */

int(void)print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
