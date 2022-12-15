#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(int x)
    {
        cout << "A" << " " << x << endl;
    }
};

class C{
    public:
    C(int y)
    {
        cout << "C" << " " << y << endl;
    }
};

class B:public C,A{
    public:
    B(int x, int y, int z):C(x),A(y)
    {
        cout << "B" << " " << x << " " << y  << " " << z <<  endl;
    }
};

/*
B(int x, int y, int z):C(x),A(y) 
    In constructor of 'C' argument 'x'(of constructor 'B') is passed 
    and In Constructor of 'A' argument 'y'(of constructor 'B') is passed.
    Means value '2' is sent as argument to constructor of 'C'.
    Means value '5' is sent as argument to constructor of 'A'.
*/ 

int main()
{
    B obj(2, 5, 9); 
    
    return 0;
}