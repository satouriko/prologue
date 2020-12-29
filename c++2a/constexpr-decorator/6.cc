#include <cstdlib>
#include <iostream>

using namespace std;

template<typename T>
constexpr auto nextstep(const enable_if_t<is_integral_v<T>, T>& t)
{
    return t + 1;
}

template<typename T>
constexpr auto nextstep(const enable_if_t<!is_integral_v<T>, T>& t)
{
    return t + 0.001;
}

int main(int argc, char *argv[])
{
    cout << nextstep<int>(1) << endl;
    cout << nextstep<double>(3.14) << endl;
    return EXIT_SUCCESS;
}
