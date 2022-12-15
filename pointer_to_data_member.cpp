#include<bits/stdc++.h>
using namespace std;

class Data{
    public:
    int a;
    void print()
    {
        cout <<  a << endl;
    }

};

int main()
{
    Data d; // object
    Data *dp = &d; // pointer to object.

    /* Syntax :
    data_type class_name::pointer_to_attribute = &class_name::attribute; */


    // Syntax to define pointer to attribute of any class. 
    int Data::*ptr = &Data::a;

    d.*ptr = 10;
    cout << "a is from object d : " << endl;
    d.print();
    cout << endl;
    dp->*ptr = 20;
    cout << "a is from pointer to object dp : " << endl;
    dp->print();

    return 0;
}