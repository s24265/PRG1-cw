#include <iostream>

auto init(int a[], int n) -> void{
	for (int i = 0; i < n; i++){
		a[i] = 0;
	}
}
auto main() -> int{
	int n;
	std::cout << "Podaj rozmiar tab: ";
	std::cin >> n;
	int a[1234];
	init(a, n);

	for (int i = 0; i < n; i++){
		std::cout << a[i];
	}
	std::cout << "\n";
	return 0;
}
