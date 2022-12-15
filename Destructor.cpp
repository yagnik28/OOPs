#include<bits/stdc++.h>
using namespace std;

/* DESTRUCTORS */
/*
1) It is memeber function which destructs OR deletes the object.
2) It is automatically called when the objects are destroyed.
3) It doesn't have arguments, no return type not even void.
4) It can't be declared static OR const.
5) It should be public.
6) We cant access the address of destructor.
7) It is automatically called when the object goes out of the scope.
8) There are only one destructor in the class.
*/

/* Order of Destruction */
  /* When object goes out of scope or deleted then : */
/*
1) The destrucor of class is called and the body of destructor is executed.
2) Destructos for non-static memeber object are called in reverse order in which they appear in the class declaration.
*/

void f()
{
    /*  Exmaple o1; // Constructor called for 'o1'.
        Example o2; // Constructor called for 'o2'. 
    */
} // Here, scope of objects 'o1' & 'o2' overs so destructor for both will be called.

  // Destructors for 'o1' & 'o2' called as in reverse order 
  //so, destructor for 'o2' called then destrucot for 'o1' called.

class Example{
    public:
    int a;
    Example(int x)
    {
        a = x;
        cout << "Constructor : " << a << endl;
    }
    ~Example()
    {
        cout << "Destructor : " << a << endl;
    }
};

void myFunstatic(int x)
{
    static Example obj1(x);
}

// Static object don't die when fuction ends but it dies when whole program executes.
// so, destructor for myFunstatic(4) will be called at last when whole program ends.

void myFun(int x)
{
    Example obj1(x);
}

int main()
{
    // Normal objects.
    /*  Example obj1(1),obj2(2),obj3(3);
        myFun(4); 
        myFun(5); 
    */
    
    // Normal and Static objects.
    /*  Example obj1(1),obj2(2),obj3(3);
        myFunstatic(4); 
        myFunstatic(5); 
    */    

    return 0;
}