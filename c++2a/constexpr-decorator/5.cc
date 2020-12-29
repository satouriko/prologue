#include <cstdlib>
#include <iostream>

using namespace std;

template<typename T>
constexpr auto nextstep(const T& t)
{
    if constexpr (is_integral_v<T>) {
        return t + 1;
    } else {
        return t + 0.001;
    }
}

int main(int argc, char *argv[])
{
    cout << nextstep(1) << endl;
    cout << nextstep(3.14) << endl;
    return EXIT_SUCCESS;
}
