#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i1 = argc;
    int i2 = move(i1);
    i1 = 2021;
    i2++;
    cout << i1 << ' ' << i2 << endl;
    return EXIT_SUCCESS;
}