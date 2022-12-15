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

/*
    Here, get() is outside the constructot of 'A' and inside the class 'A'.
*/

int main()
{
    B obj2(4, 5);
    obj2.get(); // 'B' is protected for propeties of 'A' 
    // and get() is Inherited propety with protected visibility_mode 
    // so we can't access it outside the class 'B'.

    return 0;
}