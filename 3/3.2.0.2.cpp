#include <iostream>
#include <string>

auto print(std::string* hwadress) -> void{
	std::cout << hwadress << " = " << *hwadress << "\n";
}
auto main() -> int{
	std::string hw = "Hello, World!";
	std::string* hwprint = &hw;
	
	print(hwprint);
	return 0;
}