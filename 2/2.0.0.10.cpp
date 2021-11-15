#include <iostream>

auto main() -> int{
	int a;
	std::cout << "Podaj liczbę: \n";
	std::cin >> a;
	int  silnia = 1;
	int i = a;

	do {
		silnia *= i;
		--i;
	} while (i >= 1);
	std::cout << "Wynik to: " << silnia << "\n";
	return 0;
}