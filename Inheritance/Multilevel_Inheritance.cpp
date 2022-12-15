#include<bits/stdc++.h>
using namespace std;

/* A ->B -> C -> D */

class A{
    public:
    int a;
};

class B:protected A{
    // 'a' will be proteted here.
};

class C:private A{
    // 'a' will be private here.
};

class D:public A{
    // 'a' will be public here.
};

int main()
{
    

    return 0;
}