#include <cstdlib>

int main(int argc, char *argv[])
{
    const int i = 3600 * 24;
    constexpr int i1 = 3600 * 24 * 365;
    constexpr int i2 = i * 365;
    return EXIT_SUCCESS;
}