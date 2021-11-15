#include <iostream>
#include <string>
#include <limits>

int main(int argc, char* argv[])
{
    if(argc !=3)
    {
        std::cout << "Podaj 3 argumenty" << "\n";
    }
    else
    {
        int result = std::numeric_limits<int>::min();
    
    for (int i = 1; i < argc; i++)
    {
        int value = std::stoi(argv[i]);
        if (value > result) result = value;
    }
    
}
    return 0;
}
