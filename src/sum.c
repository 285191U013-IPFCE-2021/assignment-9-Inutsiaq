#include "sum.h"

/* this funktion computes the sum of any given array using recursion*/

int sum(int a[], int n) 
{
    if (n == 0) /* this is the base condition */
    {
        return 0; 
    }
    else
        return a[n-1]+sum(a,n-1); /* second condition */
} 