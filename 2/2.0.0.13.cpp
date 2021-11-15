#include <iostream>

auto main(int argc, char* argv[]) -> int{
    int wysokosc;
    wysokosc = std::stoi(argv[1]);
    //int pod;

    for(int i = wysokosc; i > 0; i--){        
        for(int o = i; o > 0; o--){
            std::cout << "*";
            }    
        std::cout << "\n";
    }
    return 0;
}