#include <iostream>
#include <array>

auto asum(int a[], int n) -> int{
	int wynik = 0;

	for (int i = 0; i < n; i++){
		wynik += a[i];
	}
	return wynik;
}
auto main() -> int{
	std::array<int, 10> przyklad { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };
	std::cout << "Suma to: " << asum(przyklad.data(), przyklad.size()) << "\n";
	return 0;
}
