#include <iostream>
#include "main.h"

int main() {
    int ans1 = multiply(2015, 2017);
    std::cout << "2015 * 2017 = " << ans1 << '\n';
    int ans2 = mod(2019, 7);
    std::cout << "2019 mod 7 = " << ans2 << '\n';
    return 0;
}
