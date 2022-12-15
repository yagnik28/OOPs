#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A()
    {
        cout << "A" << endl;
    }
};

class C{
    public:
    C()
    {
        cout << "C" << endl;
    }
};

class B:public C,A{
    public:
    B()
    {
        cout << "B" << endl;
    }
};

// Constructor will be called as base classes written from Left to Right.

int main()
{
    B obj; 
    
    return 0;
}