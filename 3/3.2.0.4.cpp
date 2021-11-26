#include <iostream>
#include <string>

auto memset(void* s, int c, size_t n) -> void{
	char* a = (char*) s; //a
	for (size_t i = 0; i < n; i++){
		*(a + i) = c;
	}
}
auto main() -> int{
	int b[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	memset(b, 0, sizeof(b[0]) * 2);

	for (auto const& d : b){
		std::cout << d << "\n";
	}
	return 0;
}