#include <stdio.h>
#include "main.h"
void print_alphabet(void);
/**
* print_alphabet -prints alphabet in lowecase
* Return: void
*/
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar(10);
}
