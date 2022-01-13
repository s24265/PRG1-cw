#include <iostream>
#include <string>

auto main() -> int{
	std::string imie1;
	std::cout << "Podaj pierwsze imię: ";
	std::cin >> imie1;

	std::string imie2;
	std::cout << "Podaj drugie imię: ";
	std::cin >> imie2;

	if (imie1.size() > imie2.size()){
		std::cout << "\nPierwsze imię jest dłuższe!\n";
	}
	else if (imie1.size() < imie2.size()){
		std::cout << "\nDrugie imię jest dłuższe...\n";
	}
	else {
		std::cout << "\nImiona są tej samej długości.\n";
	}
	return 0;
}