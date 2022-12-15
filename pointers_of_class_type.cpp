#include<bits/stdc++.h>
using namespace std;

class box{
    public:
    int a = 10;

};

int main()
{
    box b1;
    box *ptr;
    ptr = &b1;
    cout << b1.a << endl;
    cout << (*ptr).a << " " << ptr -> a << endl;

    return 0;
}