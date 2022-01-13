#include <iostream>

auto is_divisible(int n, int d) -> bool{
	if (n & d == 0){
		return true;
	}
	return false;
}
auto is_even(int n) -> bool{
	if (is_divisible(n, 2)){
		return true;
	}
	return false;
}
auto main() -> int{
	int n, d;
	std::cout << "Podaj liczbę: ";
	std::cin >> n;
	std::cin >> d;

	if (is_even(n)){
		std::cout << "Jest liczbą parzystą.\n";
	}
	else {
		std::cout << "Nie jest liczbą parzystą.\n";
	}
}