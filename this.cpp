#include<bits/stdc++.h>
using namespace std;

/* It is a pointer to object for which the methid is called. */

class A{
    public:
    int a;
    A(int x)
    {
        this -> a = x; 
    }
    // Here, this is pointr to object(o1) for which 
    //      the method(parameterised constructor) is called.
    // *this is same as o1.
};

int main()
{
    A o1(5);

    return 0;
}