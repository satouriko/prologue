#include <cstdlib>

int main(int argc, char *argv[])
{
    int i = argc;
    const int* p1 = &i;
    *p1 = 2021;
    return EXIT_SUCCESS;
}