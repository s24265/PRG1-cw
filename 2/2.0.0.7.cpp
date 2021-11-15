#include <iostream>

int main(){
    int limit, dzielnik;
    std::cout << "Podaj limit: ";
    std::cin >> limit;
    std::cout<< "Podaj dzielnik: ";
    std::cin >> dzielnik;
    int wynik = 0;

    for (int i = 0; i <= limit ; i++){
        if (i % dzielnik == 0){
            wynik += i;
        }    
    }
    std::cout << "Wynik to: " << wynik << "\n";
    return 0;
}