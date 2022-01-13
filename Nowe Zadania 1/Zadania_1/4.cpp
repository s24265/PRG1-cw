#include <iostream>
#include <string>

auto main() -> int{
	std::string wimiona[5];
	int zimiona = 0;
	std::cout << "Podaj 5 imion: ";

	for (int i = 0; i < 5; i++){
		std::cin >> wimiona[i];
	}
	for (int i = 0; i < 5; i++){
		int n = wimiona[i].size();

		if (wimiona[i][n - 1] == 'a'){
		zimiona++;
		}
	}
	std::cout << "Liczba imion żeńskich: " << zimiona << "\n";
	std::cout << "Liczba imion męskich: " << 5 - zimiona << "\n";
	return 0;
}