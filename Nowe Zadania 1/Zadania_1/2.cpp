#include <iostream>
#include <string>

auto main() -> int{
	auto imie = std::string("Adam");
	double waga = 70;
	int wzrost = 180;
	std::cout << "Imie: " << imie << "\n";
	std::cout << "\n";
	std::cout << "Waga: " << waga << " kg"<< std::endl;
	std::cout << std::endl;
	std::cout << "Wzrost: " << wzrost << " cm" << "\n";
	return 0;
}