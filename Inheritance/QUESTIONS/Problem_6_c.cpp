#include<bits/stdc++.h>
using namespace std;

/* QUESTION ON MULTILEVEL INHERITANCE. */

class A{
    public:
    A(int x)
    {
        cout << "A" << " " << x << endl;
        void get()
        {
            cout << "Hello" << endl; 
        }
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
        get();
        cout << "C" << " " << x << " " << y << " " << z << endl;
    }
};

/* Error will occur same as Poblem_6_a */
/*
    We can only access data and methods of constructors of that classes which are directly Inherited.
    Here, 'A' is not direcly Inherited and we are trying to access get() of it's Constructor so error will occur.
*/

/* Solution of above Query */
/*
    Only access that data and methods who are from Directly Inherited classes OR from itself.
*/

/* NOTE : */
/*
    If get() was ouside the constructor and inside the class 'A' there will not be any error.
*/

int main()
{
    C obj(2, 5, 9); 

    return 0;
}