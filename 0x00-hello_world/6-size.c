#include <stdio.h>
/**
 * main - A program that prints size of various types
 *
 * Return:0
 */
int main(void)
{
char number;
int num;
long int age;
long long int nums;
float doc;
printf("Size of a char: %zu byte(s)\n", sizeof(number));
printf("Size of an int: %zu byte(s)\n", sizeof(num));
printf("Size of a long int: %zu  byte(s)\n", sizeof(age));
printf("Size of a long long int: %zu byte(s)\n", sizeof(nums));
printf("Size of a float doc: %zu bute(s)\n", sizeof(doc));
return (0);
}
