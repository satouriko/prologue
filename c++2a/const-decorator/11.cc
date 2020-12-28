#include <cstdlib>
#include <iostream>

using namespace std;

struct A {
    A() = default;

    A(const A& a)
    {
        cout << "copy" << endl;
    }

    A(const A&& a)
    {
        cout << "move" << endl;
    }

    A operator+(const A& a)
    {
        cout << "+" << endl;
        return A();
    }
};

int main(int argc, char *argv[])
{
    A a1;
    A b1 = a1;
    A b2 = move(a1);
    A&& a3 = a1 + a1;
    A b4 = a3;
    A b5 = forward<A>(a3);
    return EXIT_SUCCESS;
}