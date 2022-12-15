#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    const int a = 10; // we can't change the value of 'a' because it is const 
    // but we can use value of 'a' everywhere as read only.

    const void f1(){
        int var = 3; // we can't change the value of var because function'f1' is const
        // and const function can't change value of any attribute or method of this class.
    }

};

int main()
{
    // This is ok.
    A b;
    const A a = b;

    // const object only contains the const member function.

    // This is not ok.
    const A c;
    c = b;


    return 0;
}