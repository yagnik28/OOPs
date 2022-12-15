#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    int arr[10];
    // Take, sizeof(int) = 4.
}; 

class b1:public base{ };
class b2:public base{ };

class derived:public b1, public b2{ };

int main()
{
    cout << "Size of Derived Class is : " << sizeof(derived) << endl;;

    return 0;
}