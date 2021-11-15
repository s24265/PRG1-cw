#include <iostream>

auto main(int argc, char* argv[]) -> int{
	int wysokosc, szerokosc;
    wysokosc = std::stoi(argv[1]);
    szerokosc = std::stoi(argv[2]);

    for (int i = 0; i < szerokosc; i++){
        for (int o = 0; o < wysokosc; o++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}