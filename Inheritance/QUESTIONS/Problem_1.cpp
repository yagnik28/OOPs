#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A()
    {
        cout << "A" << endl;
    }
};

class B:public A{
    public:
    B()
    {
        cout << "B" << endl;
    }
};

int main()
{
    B obj; // Constructor of 'A'(base_class) will be called then for 'B' will be called.

    return 0;
}