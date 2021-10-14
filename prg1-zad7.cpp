#include <iostream>
#include <string>

auto ask_user_for_integer(std::string const prompt) -> int
{
    if (not prompt.empty()) {
        std::cout << prompt;
        }
        auto value = std:: string{};
        std::getline(std::cin, value);
        return std::stoi(value);
}

int main(int argc, char* argv[])
{
    for (unsigned int i =1; i < argc; i++)
    {
        int value = std::stoi(argv[i]);
        if (value > 0) std::cout << "1\n";
        else if (value == 0) std::cout << "2\n";
        else std::cout << "3\n";
    }
    return 0;
}
