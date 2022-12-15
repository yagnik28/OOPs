#include<bits/stdc++.h>
using namespace std;

/* A Derived class Inherites propeties of more than one class. */

class A{
    public:
    void fun()
    {
        cout << "Class A" << endl;
    }
};

class B{
    public:
    void fun()
    {
        cout << "Class B" << endl;
    }
};

class C:public A, public B{
    public:
    void fun()
    {
        A::fun(); // Use scope reoslution to avoid Ambiguity.
        B::fun(); // Use scope reoslution to avoid Ambiguity.
    }
};


int main()
{
    fun(); // Le Compiler : which fun() are you talking about ?

    // Use "class_name::function_name" instead of only data OR method name.
    A::fun();
    B::fun();
    C::fun();

    return 0;
}