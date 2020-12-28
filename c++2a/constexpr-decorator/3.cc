#include <cstdlib>
#include <iostream>

using namespace std;

constexpr int add(int a, int b)
{
    return a + b;
}

int main(int argc, char *argv[])
{
    constexpr int i1 = add(3, 4);
    int i2 = add(argc, 1);
    cout << i1 << ' ' << i2 << endl;
    return EXIT_SUCCESS;
}