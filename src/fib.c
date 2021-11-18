/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)

{
/* pre-condition */
  assert (n >= 0);
/* post-condition */
   if(n == 0)
    return p; // return value of p, when n == 0
   
   else if (n == 1)
    return pp; // return value of p, when n == 1
   
   else
    return (fib(n - 1, pp, pp + p)); // the value p is changed to the value pp and the value pp is changed to the value pp + p every time it runs recursive
}

