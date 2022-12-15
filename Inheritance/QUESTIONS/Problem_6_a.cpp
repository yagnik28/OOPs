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
    B(int x)
    {
        cout << "B" << " " << x << endl;
    }
};

class C:public B{
    public:
    C(int x, int y, int z):A(y),B(z)
    {
        cout << "C" << " " << x << " " << y << " " << z << endl;
    }
};

/*
    We can only call constructors of that classes which are directly Inherited.
    Here, 'A' is not direcly Inherited and we are calling it's Constructor so error will occur.
*/

int main()
{
    C obj(2, 5, 9); 

    return 0;
}