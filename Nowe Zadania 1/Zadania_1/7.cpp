#include <iostream>
#include <string>

auto count_chars(std::string a, char b){
	int wynik = 0;

	for (int i = 0; i < a.size(); i++){
		if (a[i] == b){
			wynik++;
		}
	}
	return wynik;
}
auto main() -> int{
	int lwystapien = 0;

	std::string arg;
	std::cout << "Podaj argument: ";
	std::cin >> arg;

	char znak;
	std::cout << "Podaj znak: ";
	std::cin >> znak;

	lwystapien = count_chars(arg, znak);
	std::cout << "Ilość znaków w wyrazie: "<< lwystapien << "\n";
	return 0;
}