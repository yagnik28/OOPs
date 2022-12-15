#include<bits/stdc++.h>
using namespace std;

class Data{
    public:
    int f1(float a)
    {
        return 1;
    }

};

int main()
{
    /* Syntax :
    return_type (class_name::pointer_to_function)(arguments) = &class_name::function_name; */ 

    // Syntax to define pointer to function of any class.
    int (Data::*fp1)(float) = &Data::f1;

    Data d;

    cout << "Function using f1 : " << d.f1(3.2) << endl;
    cout << "Function using pointer to function fp1 : " << d.(*fp1)(3.2) << endl;
     
    

    return 0;
}