#include <iostream>
#include <string>

auto is_palindrome(std::string n) -> bool{
	for (int i = 0; i < n.size(); i++){
		if (n[i] != n[n.size() - i -1]){
			return false;
		}
	}
	return true;
}
auto main() -> int{
	std::string n;
	std::cout << "Podaj wyraz małymi literami: ";
	std::cin >> n;

	if (is_palindrome(n)){
		std::cout << "Jest to palindrome.\n";
	}
	else {
		std::cout << "Nie jest to palindrome.\n";
	}
}