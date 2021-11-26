#include <iostream>
#include <random>

auto memrand(void* s, size_t n) -> void{
	std::random_device randdev;
	std::uniform_int_distribution<int> rand_byte(0, 255);
	char* st = (char*)s;

	for (size_t i = 0; i < n; i++){
		*(st + i) = rand_byte(randdev);
	}
}
auto main() -> int{
	char a[10];
	memrand(a, sizeof(a));

	for (auto const& c : a){
		std::cout << c;
		std::cout << "\n";
	}
	return 0;
}