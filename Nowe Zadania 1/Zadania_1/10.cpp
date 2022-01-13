#include <iostream>
#include <string>

auto word_in_a_frame(int frame, std::string word_in_a_frame) -> void{
	std::cout << "*" << word_in_a_frame;

	for (int i = 1; i <= frame-word_in_a_frame.size(); i++){
		std::cout << " ";
	}
	std::cout << "*" << std::endl; //* za wyrazem
}
auto box_print(std::string uno, std::string dos, std::string tres, std::string cuatro, std::string cinco) -> void{
	int frame = 0;

	if (uno.size() > frame){
		frame = uno.size();
	}
	if (dos.size() > frame){
		frame = dos.size();
	}
	if (tres.size() > frame){
		frame = tres.size();
	}
	if (cuatro.size() > frame){
		frame = cuatro.size();
	}
	if (cinco.size() > frame){
		frame = cinco.size();
	}

	for (int i = 0; i < frame + 2; i++){
		std::cout << "*";
	}
	std::cout << std::endl;

	word_in_a_frame(frame, uno);
	word_in_a_frame(frame, dos);
	word_in_a_frame(frame, tres);
	word_in_a_frame(frame, cuatro);
	word_in_a_frame(frame, cinco);

	for (int i = 0; i < frame + 2; i++){
		std::cout << "*";
	}
	std::cout << std::endl;
}
auto main() -> int{
	std::string uno, dos, tres, cuatro, cinco;
	std::cout << "Podaj 5 wyrazów: \n";
	std::cin >> uno >> dos >> tres >> cuatro >> cinco;
	std::cout << std::endl;

	box_print(uno, dos, tres, cuatro, cinco);
	return 0;
}