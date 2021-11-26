#include <iostream>
//#include <array>
#include <algorithm>
#include <functional>

auto main() -> int{
    int n[10] = { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };
    std::sort(n, n + 10);

    for (int i = 0; i < 10; i++){
        std::cout << "Rosnąco: " << n[i] << "\n";
    }
    return 0;
}