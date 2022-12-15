#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
    void change(int i)
    {
        a = i;
    }
    void value_of_a()
    {
        cout << "b.value_of_a() is : " << a << endl;
    }
};

class B:public A{
    int a = 15;
    public:
    void print()
    {
        cout << "b.print() is : " << a << endl;
    }
};

int main()
{
    B b;
    b.change(10);
    b.print(); // 'a' of 'B' is private but as we print it in class itself,
               // so it will not give error.
    b.value_of_a();

    return 0;
}