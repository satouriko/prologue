#include <cstdlib>

int main(int argc, char *argv[])
{
    int i = argc;
    int* const p1 = &i;
    p1 = nullptr;
    return EXIT_SUCCESS;
}