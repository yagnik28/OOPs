#include<bits/stdc++.h>
using namespace std;

/* CONSTRUCTOR */
/*
1)  It is used to initialize Object.
2)  It has the same name as the class name.
3)  It doesn't have return value.
4)  This must be public.
5)  It has 3 types --> 1) Default 2) Parameterised 3) copy.
6)  If we don't make any constructor then default will be called with no arguments.
7)  If we use '=' OR '()' operator then default copy constructor called 
       and we can also make our copy constructor.
8)  In copy constructor we pass object of same type of class in the argument of constructor. 
*/


class Example{
    public:
    int a;

    // // Parameterised Constructor.

    //     Example(int x)
    //     {
    //         a = x;
    //     }

    // // Copy Constructor

    //     Example(Example &o)
    //     {
    //         a.o3 = a.o; // value of 'a' of 'o' means 'o1' which passed in constructor, 
    //                     // is copied to value of 'a' of object 'o3'.
    //     }

};

int main()
{
    // Default Constructor
        // Example o1; // default constructor called because object 'o1' is made.

    // Parameterised Constructor
        // Example o2(5); // Parameterised Constructor called as argument '5' is passed in object.

    // Copy Constructor
        // Example o3(o1); // Copy constructor called when o1(o2) OR o1 = o2 is written,
                        // () OR = do copy all the data of right side ibject to left side.

    return 0;
}