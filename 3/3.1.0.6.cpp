#include <iostream>
#include <array>

auto search(int a[], int n, int needle) -> int{
	for (int i = 0; i < n; i++){
		if (a[i] == needle){
			return i;
		}
	}
	return -1;
}
auto main() -> int{
	std::array<int, 10> przyklad { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };
	std::cout << "101: " << search(przyklad.data(), przyklad.size(), 101) << "\n";
	std::cout << "0: " << search(przyklad.data(), przyklad.size(), 0) << "\n";
	return 0;
}