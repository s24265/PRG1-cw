#include <iostream>

auto main(int argc, char* argv[]) -> int{
	int a[1234];
	int n = std::stoi(argv[1]);
	int start = std::stoi(argv[2]);
	iota (a, n, start);

	for (int i = 0; i < n; i++){
		std::cout << a[i];
	}
	std::cout << "\n";
	return 0;
}
void iota(int a[], int n, int start){
	for (int i = 0; i < n; i++){
		a[i] = start + i;
	}
}
