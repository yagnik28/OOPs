#include<bits/stdc++.h>
using namespace std;

/* QUESTION ON MULTILEVEL INHERITANCE. */

class A{
    public:
    A(int x)
    {
        cout << "A" << " " << x << endl;
    }
};

class B:public A{
    public:
    B(int x, int y):A(y)
    {
        cout << "B" << " " << x << " " << y << endl;
    }
};

class C:public B{
    public:
    C(int x, int y, int z):B(y, z)
    {
        cout << "C" << " " << x << " " << y << " " << z << endl;
    }
};

/* QUERY OF PROBLEM_6_a */
/*
    We can only call constructors of that classes which are directly Inherited.
    Here, 'A' is not direcly Inherited and we are calling it's Constructor so error will occur.
*/

/* RESOLUTION OF QUERY */
/*
    Call every constructor related to class and Inherited class, 
        but don't call indirectly Inherited class only call directly Inherited class.
    Here, 'B' is Inherited into class 'A' so call It's Constructor 
        and when 'B' consructor called then we must declare the to call class 'A' Constructor.
*/

int main()
{
    C obj(2, 5, 9); 

    return 0;
}