#include<bits/stdc++.h>
using namespace std;

/* QUESTION - 2 */

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
    static A ob; // Now, This line will call because 
    // we initialize this static object outside the class.

    // when any static object,variabl etc.. initialize outside the class 
    // then it will get memory so it will execute.
    
    B()
    {
        cout << "B" << endl;
    }
};

A B::ob; // 'ob'(object) in class 'B' of type 'A'.

int main()
{
    B obj1;
    B obj2;

    return 0;
}