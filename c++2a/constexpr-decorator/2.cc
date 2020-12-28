#include <cstdlib>

int main(int argc, char *argv[])
{
    const int i = argc;
    constexpr int i1 = argc;
    constexpr int i2 = i;
    return EXIT_SUCCESS;
}