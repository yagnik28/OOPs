#include<bits/stdc++.h>
using namespace std;

/* QUESTION - 1 */

class A{
    public:
    A()
    {
        cout << "A" << endl;
    }
    A(int x)
    {
        cout << x << endl;
    }
};

class B{
    public:
    A obj1;
    public:
    static A ob; // This line will be ignored because, static object belong to class 
    // and class won't get any memory so, till we don't use this object 
    // it doesn't get any memory so it will not call constructor.

    // when any static object,variabl etc.. initialize only in class 
    // then it won't get any memory so it will not execute.
    
    B()
    {
        cout << "B" << endl;
    }
};

int main()
{
    B obj1;
    B obj2;

    return 0;
}