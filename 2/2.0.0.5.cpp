#include <iostream>

int main(){
	int a;
	std::cout << "Podaj liczbę: ";
	std::cin >> a;

	if (a == 2 | a == 3 | a == 5 | a == 7){
		std::cout << a << " jest liczbą pierwszą\n";
	}
	else{
		if (a%2 == 0 | a%3 == 0 | a%5 == 0 | a%7 == 0){
			std::cout << a << " nie jest liczbą pierwszą\n";
		}
		else{
			for (int i = 2; i <= a; i++){
				a += i;
			}
			std::cout << "Suma: " << a << "\n";
		}
	}
	return 0;
}