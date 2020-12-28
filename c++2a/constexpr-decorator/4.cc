#include <cstdlib>
#include <iostream>

using namespace std;

constexpr int fibonacci(const int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char *argv[])
{
    constexpr int i = fibonacci(25);
    cout << i << ' ' << fibonacci(30) << endl;
    return EXIT_SUCCESS;
}