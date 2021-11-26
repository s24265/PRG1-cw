#include <iostream>
#include <string>

auto main() -> int{
	std::string hw = "Hello, World!";
	std::string *hwadress = &hw;
	std::cout << hw << " | adres: " << hwadress << "\n";
	return 0;
}