#include <iostream>
#include <string>
#include <vector>
#include <cmath>

auto lpierwsza(int a) -> bool{
	if (a <= 1){
		return false;
	}
	for (int i = 2; i < a; i++){
		if (a % i == 0){
			return false;
		}
	}
	return true;
}
auto main(int argc, char* argv[]) -> int{
    auto pierwsze = std::vector<int>{};
    std::string lp; //l pierwsza

    int a; 
    a = std::stoi(argv[1]);

    for (int i = 2; i <= a; i++){
    	if (lpierwsza(i)){
        	pierwsze.push_back(i);
        	lp += std::to_string(i)+" "; 
        }
    }
    std::cout << lp << " ";
    std::cout << "\n";

    for( int i = 0; i < pierwsze.size(); i++){
    	std::cout << pierwsze[i] << " ";
    }
    std::cout << "\n";
    return 0;
}