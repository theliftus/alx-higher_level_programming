#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Description: prints the lowercase alphabet in reverse
* Return: Always 0 (success)
*/
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar (ch);
}
putchar ('\n');
return (0);
}
