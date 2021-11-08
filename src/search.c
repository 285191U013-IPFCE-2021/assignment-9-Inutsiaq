#include "search.h"
#include <stdbool.h>

/* this function searches for a given number x inside an array using recursion */

bool search(int a[], int n, int x)
{
    if (n==0)
        return false; /* if n == 0 there is no size to the array ie. there is no array */
    if ((n>0) && (a[n-1]!=x))
      return search(a,n-1,x); /* keeps searching if the value doesnt match x */
    if ((n>0) && (a[n-1]==x))
      return true; /* returns true is value x is found */
}