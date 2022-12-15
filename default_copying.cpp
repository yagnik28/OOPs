#include<bits/stdc++.h>
using namespace std;

class box{
    public:
    int a;

};

int main()
{
    box b1, b2;
    b1.a = 20;
    b2.a = 10;
    cout << "Before copying value of b2.a : " << b2.a << endl;
    b2 = b1;
    cout << "After copying value of b2.a : " << b2.a << endl;

    return 0;
}