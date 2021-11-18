#include "sumn.h"
#include "assert.h"
#include<stdio.h>

// Sum the n positive odd numbers
int sumn (int n)
{
// Precondition
assert (n >= 1);

    if (n == 1) //base case
        return 1;
    else 
        return n * 2 - 1 + sumn(n - 1 ); // recursive step
}