0x02. C - Functions, nested loops
program that prints _putchar is
#include "main.h"
   /**
     *main - program that prints _putchar, followed by a new line
     *
     *Return: Always 0 (success)
     *
     */
   int main(void)
   {
          _putchar('_');
          _putchar('p');
          _putchar('u');
          _putchar('t');
          _putchar('c');
          _putchar('h');
          _putchar('a');
          _putchar('r');
          _putchar('\n');
 
          return (0);
  }
FUNCTION THAT PRINTS THE ALPHABET IN LOWERCASE 
#include "main.h"
  2
  3 /**
  4  * print_alphabet - prints the alphabet in lowercase, followed by a new line.
  5  */
  6 void print_alphabet(void)
  7 {
  8         char letter;
  9
 10         for (letter = 'a'; letter <= 'z'; letter++)
 11                 _putchar(letter);
 12
 13         _putchar('\n');
 14 }
