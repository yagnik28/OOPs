#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    ~A()
    {
        cout << "A" << endl;
    }
};

class B{
    public:
    ~B()
    {
        cout << "B" << endl;
    }
};

class C:public A,B{
    public:
    ~C()
    {
        cout << "C" <<  endl;
    }
};


int main()
{
    C c; 
    /*
        Destructor called here when main program ends 
        and called in reverse manner as constructor called. 
    */
    
    return 0;
}