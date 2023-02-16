#include <stdio.h>
/** main - prints various sizes computer types run on
 * Return: 0
 */
int main(void)
{ 
	char x;
	int y;
	long int a;
	long long int b;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
