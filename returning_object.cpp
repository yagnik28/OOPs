#include<bits/stdc++.h>
using namespace std;

class Example{
    public:
    int a;
    Example add(Example Ea, Example Eb)
    {
        Example Ec;
        Ec.a = Ea.a + Eb.a;
        return Ec;
    }

};

int main()
{
    Example E1, E2, E3;
    E1.a = 7;
    E2.a = 19;
    E3.a = 2;
    
    E3.add(E1, E2); // E3.a = 2 because E3.add() returns object and 
    // we didn't take it in any object so E3 will saty as it was.

    E3 = E3.add(E1, E2); // Ec returned object is given to E3 and now E3 = Ec = 7 + 19 = 26.
    cout << E3.a << endl;


    return 0;
}