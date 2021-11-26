#include <iostream>

auto memcpy(void *dest, const void *src, size_t n) -> void{
	char* destn = (char*)dest;
	char* srco = (char*)src;

	for (size_t i = 0; i < n; i++){
		*(destn + i) = *(srco + i);
	}
}
auto main() -> int{
	char a[] = "Przykladowy tekst :)";
	char b[20];

	memcpy(b, a, sizeof(b));

	for (auto const& c : b){
		std::cout << c;
	}
	std::cout << "\n";
	return 0;
}