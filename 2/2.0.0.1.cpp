#include <iostream>

int main(){
	int a;
	std::cout << "Podaj pierwszą liczbę: ";
	std::cin >> a;
	
	int b;
	std::cout << "Podaj drugą liczbę: ";
	std::cin >> b;
	
	if (b > a){
		for (int i = a; i < b; i++){
		std::cout << i << "\n";
		}
	}
	return 0;
}
