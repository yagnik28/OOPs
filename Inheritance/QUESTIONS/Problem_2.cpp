#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(int x)
    {
        cout << "A" << " " << x << endl;
    }
};

class B:public A{
    public:
    B(int x, int y):A(x)
    {
        cout << "B" << " " << x << " " << y <<  endl;
    }
};

/*
B(int x, int y):A(x) means In constructor of 'A' argument 'x'(of constructor 'B') is passed.
                     means value '4' is sent as argument to constructor of 'A'.
*/ 

int main()
{
    B obj(4, 5); 
    
    return 0;
}