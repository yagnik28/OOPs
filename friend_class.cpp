#include<bits/stdc++.h>
using namespace std;

class A{
    private:
    int a = 10;
    friend class B;

    /*  
        void print(B p)
        {
            cout << p.b << endl; 

            'B' is friend class of 'A' but 'A' is not friend class of 'B'
            so, 'A' can't use private data memebr of 'B' but 'B' can use private member of 'A'
        }
    */
   
};

class B{
    private:
    int b = 29;

    public:
    void show(A x)
    {
        cout << x.a << endl; // B is friend class of A so we can use private data member of A.
    }

};

class C{
    public:
    void show(A x)
    {
        /* cout << x.a << endl; */

        // we can't use x.a ecaue C is not friend class of A 
        // so, we can't use any private data member of A in class C.
    }

};


int main()
{
    A x;
    B y;
    y.show(x); // 'y' is object of 'B' and sends an object 'x' of class 'A' 
    // and access the attribute 'a' from private specifier of 'A'.

    return 0;
}