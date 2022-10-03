#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns int
 */
int main(int argc, char *argv[])
{
int a, b, c;

if (argc != 3)
{
puts("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a * b;
printf("%d\n", c);
return (0);
}
