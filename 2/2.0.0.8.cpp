#include <iostream>

auto main() -> int{
	int a;
	std::cout << "Podaj liczbę: \n";
	std::cin >> a;
	int  silnia = 1;

	for (auto i = a; i >=1; i--){
		silnia *= i;		
	}
	std::cout << "Wynik to: " << silnia << "\n";
	return 0;
}