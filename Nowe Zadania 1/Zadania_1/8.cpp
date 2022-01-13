#include <iostream>
#include <string>

auto show_n_char(std::string a, int b) -> void{
	for (int i = 0; i < a.size(); i += b){
		std::cout << a[i] << " ";		
	}
	std::cout << "\n";
}
auto main() -> int{
	std::string danywyraz;
	std::cout << "Podaj dowolny wyraz: ";
	std::cin >> danywyraz;

	int n;
	std::cout << "Co który znak chcesz go wyświetlić? ";
	std::cin >> n;

	show_n_char(danywyraz, n);
	return 0;
}