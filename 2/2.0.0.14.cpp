#include <iostream>

auto main(int argc, char* argv[]) -> int{
    int wymiary;
    wymiary = std::stoi(argv[1]);

    for (int i = 1; i <= wymiary; i++){
        for (int o = 1; o <= wymiary; o++){
            if (i > 1 && i < wymiary && o > 1 && o < wymiary){
                std::cout<<" ";
            }
            else{
            std::cout << "*";
            }
        }
        std::cout << "\n";
    }
    return 0;
}