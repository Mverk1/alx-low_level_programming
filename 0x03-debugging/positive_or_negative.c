#include "main.h"
/**
 *positive_or_negative()
 *
 * This function takes an integer as input and prints a message indicating
 * whether the number is positive, negative, or zero.
 *
 * Parameters:
 *     i - The integer to be checked.
 *
 * Return: 0 on success
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
