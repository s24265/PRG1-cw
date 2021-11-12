#include <iostream>

int main(){
	int a;
	std::cout << "Podaj pierwszą liczbę: ";
	std::cin >> a;
	int b;
	std::cout << "Podaj drugą liczbę: ";
	std::cin >> b;
	int c;
	std::cout << "Podaj trzecią liczbę: ";
	std::cin >> c;

	if (c == 0){
		std::cerr << "Trzecia liczba musi być większa od 0!\n";
		return 1;
	}
	else
	{
		for (int i = a; i < b; i++){
			if (i%c == 0){
				std::cout << i << "\n";
			}
		}
	}
	return 0;
}

