#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = argc;
    // int& lvf = i + 1;
    const int& cf = i + 1;
    int&& rvf = i + 1;
    const int&& crvf = i + 1;
    int i2 = rvf;
    i2++;
    rvf++;
    // crvf++;
    cout << cf << ' ' << rvf << ' ' << endl;
    return EXIT_SUCCESS;
}