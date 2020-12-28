#include <cstdlib>
#include <iostream>

using namespace std;

struct A {
    static int s;
    int a = 2020;

    void increase()
    {
        a++;
    }

    void print() const
    {
        cout << a << ' ' << ++A::s << endl;
    }
};

int A::s = 0;

int main(int argc, char *argv[])
{
    A a;
    a.increase();
    a.print();
    return EXIT_SUCCESS;
}