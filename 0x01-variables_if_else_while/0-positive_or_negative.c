#include <stdlib.h>

#include <stdio.h>

#include <time.h>



/**

* main - Prints a random number decides whether it is positive,negative,orzero.

*

* Return: Always 0.

*/

int main(void)

{

        int n;


        srand(time(0));

        n = rand() - RAND_MAX /

