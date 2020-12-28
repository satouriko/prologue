#include <cstdlib>

int main(int argc, char *argv[])
{
    const int i = argc;
    int* p1 = &i;
    *p1 = 2021;
    return EXIT_SUCCESS;
}