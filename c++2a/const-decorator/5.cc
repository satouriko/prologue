#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = argc;
    int* const p1 = &i;
    cout << *p1 << endl;
    *p1 = 2021;
    cout << *p1 << endl;
    return EXIT_SUCCESS;
}