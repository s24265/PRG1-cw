#include <iostream>
#include <string>

struct switch1{
    std::string description;
    bool toggled = false;

    bool is_on(){
        if (toggled == false){
            std::cout << "Przelacznik: OFF" << "\n";
            return false;
        }
        else {
            std::cout << "Przelacznik: ON" << "\n";
            return true;
        }
    }
    void toggle(){
        if (toggled == false){
            toggled = true;
        }
        else {
            toggled = false;
        }
    }
};

auto main() -> int{
    auto prze1 = switch1{"Przelacznik"};
    prze1.is_on();
    prze1.toggle();
    prze1.is_on();
    return 0;
}
