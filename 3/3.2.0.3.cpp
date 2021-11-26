#include <iostream>
#include <string>

auto swap(int& a, int& b) -> void{
	auto c = int{};
	c = a, a = b, b = c;
	std::cout << a << " " << b << "\n";
}
auto main() -> int{
	auto a = int{42};
	auto b = int{64};
	std::cout << a << " " << b << "\n";

	swap(a, b);
	return 0;
}