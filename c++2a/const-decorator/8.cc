#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = argc;
    const int& a1 = i;
    int& a2 = i;
    cout << a1 << endl;
    a2 = 2021;
    cout << a1 << endl;
    return EXIT_SUCCESS;
}