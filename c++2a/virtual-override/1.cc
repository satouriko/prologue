#include <cstdlib>
#include <iostream>

using namespace std;

struct A {
    virtual void foo()
    {
        cout << "A::foo() is called" << endl;
    }

    void bar()
    {
        cout << "A::bar() is called" << endl;
    }
};

struct B : public A {
    void foo()
    {
        cout << "B::foo() is called" << endl;
    }

    void bar()
    {
        cout << "B::bar() is called" << endl;
    }
};

int main()
{
    B b;
    A* a = &b;
    a->foo();
    a->bar();
    b.foo();
    b.bar();
    return EXIT_SUCCESS;
}
