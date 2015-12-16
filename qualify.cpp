/*
 * =====================================================================================
 *
 *       Filename:  qualify.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  10/15/2015 14:24:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;
class A{
    public:
    virtual void q(){cout << "A::q\n";}
    virtual void p() {cout << "A::p\n";q();}
    virtual void f() {cout << "A::f\n";q();}
};
class B : public A{

    public:
        void p(){
            cout << "B::p\n";q();
        }
        void q(){
            cout << "B::q\n";
        }
};
class C : public B{
    public:
        void f() {
            cout << "C::f\n";
            p();
        }
};

int main(){
    A *a1 = new A;
    B *b1 = new B;
    a1 = b1;
    a1->f();
    C *c1 = new C;
    a1 = c1;
    a1->f();
}
