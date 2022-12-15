#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a = 10;
    friend void B::show(A x);
    // only 'show' function can use the private data member of class 'A' in class 'B'.

    friend void modify();
    // function 'modify' can access private member of 'A' where modify is global function,
    // it is not in any class.
   
};

class B{
    public:
    void show(A x)
    {
        cout << x.a << endl;
    }
};

void modify()
{
    A x;
    cout << x.a << endl;
}


int main()
{
    A x;
    B y;
    y.show(x); // 'y' is object of 'B' and sends an object 'x' of class 'A' 
    // and access the attribute 'a' from private specifier of 'A' for friend function 'show'.
    modify();

    return 0;
}