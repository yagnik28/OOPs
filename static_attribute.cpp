#include<bits/stdc++.h>
using namespace std;

class box{
    public:
    static int a;
    // only one copy of 'a' will be form and that will belong to the class 'box', 
    // we don't have different copies for every object,
    // with objects of the class we can update the value of 'a'

};

int box::a = 10; // static attributes can't be initialized inside the class 
// because static is belongs to class, not the object 
// so, if we initialize it in class it require storage in class 
// where we don't have storage for class.

int main()
{
    box b1, b2;
    b1.a = 15; 
    b2.a = 20;
    cout << box::a << endl;
    cout << b1.a << endl;
    cout << b2.a << endl;
 
    return 0;
}