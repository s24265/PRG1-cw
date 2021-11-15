#include <iostream>

auto main(int argc, char* argv[]) -> int{
    int wysokosc;  
    wysokosc = std::stoi(argv[1]);
    int pod = 1;
    
    for (int i = 1; i <= wysokosc; i++){
        for(int o = i; o <= pod; o++){
            std::cout<<"*";
        }
        pod += 2;
        std::cout << "\n";
    }
    return 0;
}