#include <iostream>
#include <array>

auto amax(int a[], int n) -> int{
    int najwartosc = 0;

    for (int i = 0; i < n; i++){
        if (a[i] > najwartosc){
            najwartosc = a[i];
        }
    }
    return najwartosc;
}
auto main() -> int{
    std::array<int, 10> przyklad { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };
    std::cout << "Największa wartość to: " << amax(przyklad.data(), przyklad.size()) << "\n";
    return 0;
}