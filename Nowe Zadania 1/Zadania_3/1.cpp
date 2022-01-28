#include <iostream>

struct Punkt{

private:
	int x, y;

public:
	void show() const{
		std::cout << std::endl << "Wspolrzedne punktu to (" << x << ", " << y << ")" << "\n";
	}
	void show_pun() const{
		std::cout << "(" << x << ", " << y << ")";
	}
	int getX() const{
		return x;
	}
	int getY() const{
		return y;
	}
	void setXY(const int& new_x,const int& new_y){
		x = new_x;
		y = new_y;
	}
	void setXY(const Punkt &pun){
		x = pun.x;
		y = pun.y;
	}
	Punkt getXY(){
		return Punkt(x, y);
	}
	Punkt(const int &new_x,const int &new_y){
		x = new_x;
		y = new_y;

		std::cout << "Punkt (" << x << ", " << y << ") zostal utworzony";
		std::cout << std::endl;
	}
	Punkt(const Punkt& pun){
		x = pun.getX();
		y = pun.getY();
		std::cout << "Nowy punkt: ";
		pun.show_pun();
	}
	~Punkt(){
		std::cout << "Punkt "; show_pun(); std::cout << " zostal zniszczony" << "\n";
	}
};

auto main() -> int{
	auto pun1 = Punkt(1, 2);	//punkty
	auto pun2 = Punkt(5, 3);
	pun1.show();
	pun2.show();

	std::cout << std::endl << "Wspolrzedna x punkt 1 = " << pun1.getX() << "\n";
	std::cout << std::endl << "Wspolrzedna y punkt 1 = " << pun1.getY() << "\n";
	std::cout << std::endl << "Wspolrzedna x punkt 2 = " << pun2.getX() << "\n";
	std::cout << std::endl << "Wspolrzedna y punkt 2 = " << pun2.getY() << "\n";

	std::cout << std::endl; pun1.setXY(2, 7);
	pun1.show_pun();
	std::cout << "\n";

	pun2.setXY(Punkt(8, 5));
	pun2.show_pun();
	std::cout << "\n";

	pun1.getXY().show_pun();
	std::cout << "\n";

	auto pun3 = Punkt(pun2);
	pun3.show_pun();
	std::cout << "\n";

	return 0;
}
