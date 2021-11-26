#include <iostream>

auto memfrob(void *s, size_t n) -> void{
	char* st = (char*)s;

	for (size_t i = 0; i < n; i++){
		*(st + i) ^= 42;
	}
}
auto main() -> int{
	char a[] = "Przykladowy tekst :)";
	//char b[20];

	std::cout << "Encrypted: ";
	memfrob(a, sizeof(a));

	for (auto const& c : a){
		std::cout << c;
	}
	std::cout << "\n";
	std::cout << "Decrypted: ";
	memfrob(a, sizeof(a));

	for (auto const& c : a){
		std::cout << c;
	}
	std::cout << "\n";
	return 0;
}