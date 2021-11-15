#include <iostream>

auto main(int argc, char* argv[]) -> int{
    int a = std::stoi(argv[1]);

    for(int i =2; i < argc; i++){
        int b = std::stoi(argv[i]);
        
        if (a > b){
            std::cout << a << " > " << b << "\n";
        }
        else if (a == b){
            std::cout << a << " == " << b << "\n";
        }
        else{
            std::cout << a << " > " << b << "\n";
        }
    }
    return 0;
}