#include <iostream>

auto main(int argc, char* argv[]) -> int{
	int a[1234];
	int n = std::stoi(argv[1]);
	init(a, n);

	for (int i = 0; i < n; i++){
		std::cout << a[i];
		//std::cout << "\n";
	}
	std::cout << "\n";
	return 0;
}
void init(int a[], int n){
	for (int i = 0; i < n; i++){
		a[i] = 0;
	}
}
