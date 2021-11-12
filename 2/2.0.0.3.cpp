#include <iostream>

int main(){
	int a, b, s;
	std::cout << "Podaj pierwszą liczbę: ";
	std::cin >> a;
	std::cout << "Podaj drugą liczbę: ";
	std::cin >> b;
	std::cout << "Podaj trzecią liczbę: ";
	std::cin >> s;

	if (s == 0){
		std::cout << "Trzecia liczba nie może być równa 0\n";
	}
	else if (b < a){
		std::cout << "Druga liczba nie może być mniejsza od pierwszej\n";
	}
	else if (s < 0){
		s*= -1;
		
		if (s > b){
			std::cout << "Trzecia liczba nie może być większa od drugiej\n";
		}
		while (a < b){
			std::cout << a << "\n";
			a+= s;
		}
	}
	else{
	if (s > b){
		std::cout << "Trzecia liczba nie może być większa od drugiej\n";
		}
	while (a < b){
		std::cout << a << "\n";
		a+= s;
	}
	return 0;
	}
}
