#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int mul(int a, int b)
    {
        return a*b;
    }
};

class B:private A{
    public:
    int f(int a, int b)
    {
        return mul(a, b);
    }
};

int main()
{
    B b;
    cout << b.f(2, 3) << endl; // It will work.
    /* 
    cout << b.mul(2, 3) << endl; 
    It will not work, because mul() is Inherited as private method of 'B' from 'A'.
    */

    return 0;
}