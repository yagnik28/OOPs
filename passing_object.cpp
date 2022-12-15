#include<bits/stdc++.h>
using namespace std;

class Example{
    public:
    int a;
    void add(Example E)
    {
        a = a + E.a;
    }

};

int main()
{
    Example E1, E2;
    E1.a = 5;
    E2.a = 10;
    E2.add(E1); // E2.a = E2.a + E1.a = 10 + 5 = 15.
    cout << E1.a << " " << E2.a << endl; 

    return 0;
}