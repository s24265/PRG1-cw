#include <iostream>

auto main() -> int{
	int a;
	std::cout << "Podaj liczbę: \n";
	std::cin >> a;
	int  silnia = 1;
	int i = a;

	while (i >= 1){
		silnia *= i;
		--i;
	}
	std::cout << "Wynik to: " << silnia << "\n";
	return 0;
}