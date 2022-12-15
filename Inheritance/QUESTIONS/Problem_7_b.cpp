#include<bits/stdc++.h>
using namespace std;

/* QUESTION ON MULTILEVEL INHERITANCE. */

class A{
    public:
    A(int x)
    {
        cout << "A" << " " << x << endl;
    }
    void get()
    {
        cout << "Hello" << endl; 
    }
};

// CHANGE : protected instead of public 'A'.
class B:protected A{  
    public:
    B(int x, int y):A(y)
    {
        cout << "B" << " " << x << " " << y << endl;
    }
};

class C:public B{
    public:
    C(int x, int y, int z):B(y, z)
    {
        get();
        cout << "C" << " " << x << " " << y << " " << z << endl;
    }
};

/* Here, We have protected, so we Inherite it then we can use it so, no error here.*/

/*
    Here, get() is outside the constructot of 'A' and inside the class 'A'.
*/

int main()
{
    A a(20);
    a.get(); 

    return 0;
}