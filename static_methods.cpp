#include<bits/stdc++.h>
using namespace std;

class box{
    public:
    static int getcount()
    {
        /* return length; */ 
        // we can't access this length bacause 
        // static methods can't access non-static attributes
        // Static Methods can only access Static Attributes.

        return height;
    }
    static int height;
    int length; 

};

int box::height = 10;

int main()
{
    box b1, b2;
    b1.height = 38;
    b2.height = 94;
    cout << box::getcount() << endl;
    cout << b1.getcount() << endl;
    cout << b2.getcount() << endl;
 
    return 0;
}