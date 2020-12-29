#include <cstdlib>
#include <iostream>

using namespace std;

struct A  {
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
    void foo(int a)
    {
        cout << "B::foo() is called" << endl;
    }

    void bar(int a)
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
    b.foo(0);
    b.bar(0);
    return EXIT_SUCCESS;
}
