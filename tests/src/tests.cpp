#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumtail(1,0)==1); // If n = 1 (out base case) we just return 1 + total, because 1 + 0 = 1
    REQUIRE(sumtail(3,0)==6); // 3 + 2 + 1 = 6
    REQUIRE(sumtail(33,0)==561); // 33 + 32 + 31 + 30 .... + 1 = 561 
}   

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumwhile(1)==1); // 1 = 1
    REQUIRE(sumwhile(3)==6); // 3 + 2 + 1 = 6   
    REQUIRE(sumwhile(33)==561); // 33 + 32 + 31 + .. + 1 = 561
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(fib(0,0,1)==0); // fib(0) = 0, it return p, which is 0
    REQUIRE(fib(1,0,1)==1); // fib(1) = 1, it return pp, which is 1
    REQUIRE(fib(5,0,1)==5); // fib(5) = 5, it return pp, which has evaluated to pp = 5 throughtout our recursive function
    REQUIRE(fib(10,0,1)==55); // fib(10) = 10
}


