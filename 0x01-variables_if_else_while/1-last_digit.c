#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of the number stored in the variable n .
 *
 * Return: Always 0 (success)
*/
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
