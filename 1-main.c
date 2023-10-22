#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prints to stdout
 * Returns: Always 0.
*/

int main(void)
{
    char name = "Charles";
    int age = 31;
    double bmi = 22.5;

    _printf("My name is %s, and I am %d years old, and with a bmi of %f", name, age, bmi);
    return (0);
}