#include <iostream>

auto iota(int a[], int n, int start) -> void{
	for (int i = 0; i < n; i++){
		a[i] = start + i;
	}
}
auto main() -> int{
	int n;
	int start;
	std::cin >> n;
	std::cin >> start;
	int a[1234];
	iota (a, n, start);
	
	for (int i = 0; i < n; i++){
		std::cout << a[i];
	}
	std::cout << "\n";
	return 0;
}
