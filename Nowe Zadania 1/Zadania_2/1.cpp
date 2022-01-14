#include <iostream>
#include <vector>
#include <cmath>

auto average_of(std::vector<double> wektor) -> float{
	float suma = 0;

	for (int i = 0; i < wektor.size(); i++){
		suma += wektor[i];
	}
	float sredniaa = suma / wektor.size(); //s arytmetyczna
	return sredniaa;
}
auto main() -> int{
	auto lrzeczywiste = std::vector<double>{1, 2, 3, 4, 5, } //nie skonczone
}
