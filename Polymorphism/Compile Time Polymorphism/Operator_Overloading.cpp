#include<bits/stdc++.h>
using namespace std;

                /* SYNTAX */
/*
    class class_name{
        public:
            returnType operator symbol(arguments){
                ...
            }
    };
    operator == keyword.
    symbol == operator that we wants to overload.
*/


/*
    In C++, We can change the way operators work for use-defined types like onjects and structures, etc..
        EX : '+' is use for add two numbers and also use for add two strings also.
        So, how we can make '+' to add two objects, that is using Operator Overloading.
*/

/* RESTRICTION IN OPERATOR OVERLOADING */

    /* 4 OPERATORS WE CAN'T OVERLOAD */
    /*
        1) :: SCOPE RESOLUTION
        2) . MEMBER FUNCTION
        3) .* MEMBER SELECTION THROUGH POINTER TO FUNCTION
        4) ?: TERNARY OPERATOR
    */
   /* New Operator such as **, <>, &| can not be created. */
   /* It is not possible to change the precedence, grouping, OR number of Operands of Operator. */
   /* The Overloaded Operator -> must either return a raw pointer OR return an object for which Operator -> is turn Overloaded. */
   /* The Overload of Operators && AND || lose Short-Circuit evalution. */



/* OPERATOR OVERLOADING OF 3 TYPES */
/*
    1) MEMBER FUNCTION (IN WHICH METHOD IS CALLED FOR ONE OBJECT, MEANS METHOD IS PRESENT IN CLASS
                            AND OTHER OBJECTS ARE SENT AS ARGUMENTS)

    2) NON-MEMBER FUNCTION (IN WHICH CALLED METHOD IS NOT PRESENT IN CLASS, SO CALLED METHOS IS NOT BELONG TO ANY OBJECT,
                            IT IS OUTSIDE OF CLASS AND WE NEED TO GIVE EVERY VARIABLE OR OBJECTS AS ARGUMENT)

    3) FREIND FUNCTION (IN WHICH FREIND FUNCTIONS ALSO OVERLOADED)
*/


/* QUESTION - 1 */
    /* USING MEMBER FUNCTION  */

    class Count{
        public:
        int value;
        void operator ++ () // post-increment
        {
            ++value;
        }
        void operator ++ (int) // pre-increment --> for pre-inc. pass argument type same as variable that we wants to increment.
        {
            ++value;
        }
    };
    /* Class Count has two overloaded operaor (1) ++C(which without argument) (2) C++(which with argument) */


/* QUESTION - 2 */
    /* USING MEMBER FUNCTION  */

    class Complex{
        public:
        int r = 5, i = 7;
        Complex operator + (const Complex & obj) // const is to keep obj constant, to avoid changing it's value.
        {
            Complex temp;
            temp.r = r + obj.r;
            temp.i = i + obj.i;
            return temp;
        }
    };
    /* '+' is Overloaded for add two complex numbers. */


/* QUESTION - 3 */
    /* USING NON-MEMBER FUNCTION */

    class Complex2{
        public:
        int r = 12, i = 34;
    };

    Complex2 operator + (const Complex2 & obj1, const Complex2 & obj2)
    {
        Complex2 temp;
        temp.r = obj1.r + obj2.r;
        temp.i = obj1.i + obj2.i;
        return temp; 
    }


/* QUESTION - 4 */

    class Linear{
        public:
        double a = 10, b = 15;
        double operator () (double x) // Overloaded (), which means we can give any value to data of object, 
                                      // with same as function with ().
        {
            return a*x + b;
        }
    };


int main()
{
    /* QUESTION - 1 */
        Count C1;
        // for 1st ++ operator it will do pre-increment, 2nd will do post-increment.
        C1.value = 3;
        ++C1; // <=> ++(C.value)  
        cout << C1.value << endl;
        C1++; // <==> C1.operator++ --> calling method 'operator++' for object C1.
        cout << C1.value << endl;


    /* QUESTION - 2 */
        Complex c1, c2;
        Complex c3 = c1 + c2; // <==> c1.operator+(c2) which return object of type complex.
        cout << c3.r << " " << c3.i << endl;


    /* QUESTION - 3 */
        Complex2 c21, c22;
        Complex2 c23 = c21 + c22;
        cout << c23.r << " " << c23.i << endl;


    /* QUESTION - 4 */
        Linear f;
        Linear g;
        double f1 = f(1); 
        double f2 = g(3);     
        cout << f1 << " " << f2 << endl;
        // EX : Linear f, f is object. f(1) means 1 is pass to the object because () is overloaded 
        // and answer willl be a*x+b, means 10*1 + 15 (a = 10, b = 15, x = 1 -> passed as argument).



    return 0;
}