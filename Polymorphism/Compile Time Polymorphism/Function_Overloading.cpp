#include<bits/stdc++.h>
using namespace std;

/*
    1) When there are multiple funcitons with the same name but different parameters 
        then this functions are said to be Overloaded Functions.
    2) Function can be Overloaded by chnage in number of Arguments OR/AND by changing types of Arguments.
*/

/* RULES FOR FUNCTION OVERLOADING */
/*
    1) Function declares that differ only in return type are EQUIVALENT.
            EX : int fun(int a) <=> void fun(int a).


    2) Parameter Declarations that differ only in a pointer(*) versus an array[] are EQUIVALENT.
            EX : int fun(int *arr) <=> int fun(int arr[]).


    3) Parameter Declarations that differ only in that one is a function type 
       and the other is a pointer to same function type are EQUIVALENT.

        => int fun(int f(int a)) & int fun(int (*ptr)(int a)) are EQUIVALENT.

            In C++, Pointer to Function is EQUIVALENT to Function.
            So, whenever we give function as argument OR pointer to function as argument, It is same.
            EX : ptr = &f; --> f(5) <=> (*ptr)(5) <=> ptr(5) ==> f(5) <=> ptr(5).


    4) Parameter Declarations that differ only in the presence of const OR/AND volatile are EQUIVALENT.
            EX : void fun(int a) <=> void fun(const int a).


    5) Two Parameter Declarations that differ only in their default Arguments are EQUIVALENT.
            EX : void fun(int a, int b) <=> void fun(int a, int b=3).

*/

int main()
{
    

    return 0;
}