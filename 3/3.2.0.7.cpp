#include <iostream>

auto memrev(void* s, size_t n) -> void{
	char* st = (char*)s;
	char* nm = new char[n];
	
	for (size_t i = 0, j = n - 1; i < n; i++, j--){
		*(nm + i) = *(st + j);	
	}
	for (size_t i = 0; i < n; i++){
		*(st + i) = *(nm + i);	
	}
}
auto main() -> int{
	char a[] = "Przykladowy tekst :P";

	for (auto const& c : a){
		std::cout << c;
	}
	memrev(a, sizeof(a));
	std::cout << " \t";

	for (auto const& c : a){
		std::cout << c;
	}
	std::cout << "\n";
	return 0;
}