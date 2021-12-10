#include <iostream>

auto is_even(int n) -> bool{
	if (n % 2 == 0){
		return true;
	}
	return false;
}
auto main() -> int{
	int n;
	std::cout << "Podaj liczbę: ";
	std::cin >> n;

	if (is_even(n)){
		std::cout << "Jest liczbą parzystą.\n";
	}
	else {
		std::cout << "Nie jest liczbą parzystą.\n";
	}
}