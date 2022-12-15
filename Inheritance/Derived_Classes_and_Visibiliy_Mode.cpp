#include<bits/stdc++.h>
using namespace std;

                /* SYNTAX */
    /*
    class derived_class : visibility_mode base_class_name{
        Body of derived_class
    };
    */


// PUBLIC : Public data and methods can be access by any class any function anywhere.
// PROTECTED : Protected data and method can be access by Inherited class only, 
// other functions and class outside the base and Inherited class can't access protected properties. 
// PRIVATE : Private data and methods can be use by only base class, It can't be Inherited.


/* ACCESS SPECIFIRES POWER(SECUIRITY) */
// PUBLIC < PROTECTED < PRIVATE


/* NOTE : */
// PRIVATE data can not be INHERITE.


/* VISIBILITY MODE TABLE */
/*

    base class visibility |    derived class visibility
                          |
                          |    public   | protected  | private
                          |
    public                |    public   | protected  | private
    protected             |    proteted | protected  | private
    private               |    Not Inherite | Not Inherite | Not Inherite

*/


/* VISIBILITY MODE : max(public, protected, private) */


class A{
    public:
    int a;
    protected:
    int b;
    private:
    int c;
};

class B:public A{
    // 'a','b' inherited and 'a' is PUBLIC and 'b' is PROTECTED for 'B'
    // 'a' of this class 'B' can be access by any method or class anywhere,
    // 'b' of this class 'B' can be only access by inherited ans class 'B' itself.
};

class C:protected A{
    // 'a','b' inherited and 'a' is PROTECTED and 'b' is PROTECTED for 'C'
    // 'a' & 'b' of this class 'C' can be only access by inherited ans class 'C' itself.
};

class D:private A{
    // 'a','b' inherited and 'a' is PRIVATE and 'b' is PRIVATE for 'D'
    // 'a' & 'b' can't be inheried can't be use outside the class, 
    // only access by class 'D' itself.
};


int main()
{
    

    return 0;
}