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
    B(int x)
    {
        cout << "B" << " " << x << endl;
    }
};
/*
    If any class is Inherited and we make object with arguments 
    then we must call Inherited(base) class's Constructor with Derived class's Consructor 
    otherwise It will give error.
*/

int main()
{
    B obj(12); 

    return 0;
}