#include <iostream>
#include <cmath>

struct Punkt{
private:
    int x, y;

public:
    void show() const{
        std::cout << "Wspolrzedne punktu to (" << x << ", " << y << ")\n";
    }
    void show_pun() const{
        std::cout << "(" << x << ", " << y << ")\n";
    }
    int getX() const{
        return x;
    }
    int getY() const{
        return y;
    }
    void setXY(const int& new_x, const int& new_y){
        x = new_x;
        y = new_y;
    }
    void setXY(const Punkt& p){
        x = p.x;
        y = p.y;
    }
    Punkt getXY(){
        return Punkt(x, y);
    }
    Punkt(const int& new_x, const int& new_y){
        x = new_x;
        y = new_y;
        std::cout << "Punkt (" << x << ", " << y << ") zostal zniszczony" << "\n";
    }
    Punkt(const Punkt& pun){
        x = pun.getX();
        y = pun.getY();
        std::cout << "Nowy punkt zostal stworzony";
        pun.show_pun();
    }
    ~Punkt(){
        std::cout << "Punkt ";
        show_pun();
        std::cout << "zostal zniszczony" << "\n";
    }
};

struct Prostokat {
private:
    Punkt lt, rb;

public:
    Prostokat(const int& x1, const int& x2, const int& y1, const int& y2) : lt(x1, y1), rb(x2, y2) {}

    Prostokat(const Punkt& p1, const Punkt& p2) : lt(p1), rb(p2) {}

    ~Prostokat(){
        std::cout << "Prostokat ";
        std::cout << "(" << lt.getX() << ", " << lt.getY() << ")";
        std::cout << " x ";
        std::cout << "(" << rb.getX() << ", " << rb.getY() << ")";
    }
    void show() const{
        lt.show();
        rb.show();
        std::cout << abs(lt.getX() - rb.getX()) << "\n";
        std::cout << abs(lt.getY() - rb.getY()) << "\n";
    }
    int area() const{
        int w = abs(lt.getX() - rb.getX());
        int h = abs(lt.getY() - rb.getY());
        return w * h;
    }
    bool is_inside(const Punkt& p) const{
        int x_min, x_max, y_min, y_max;
        int p_x = p.getX();
        int p_y = p.getY();

        if (lt.getX() <= rb.getX()){
            x_min = lt.getX();
            x_max = rb.getX();
        }
        else {
            x_min = rb.getX();
            x_max = lt.getX();
        }

        if (lt.getY() <= rb.getY()){
            y_min = lt.getY();
            y_max = rb.getY();
        }
        else {
            y_min = rb.getY();
            y_max = lt.getY();
        }
        if (p_x < x_min || p_x > x_max || p_y < y_min || p_y > y_max)
            return false;
        return true;
    }
};

auto main() -> int{
    auto p1 = Prostokat(5, 8, 4, 2);
    auto p2 = Prostokat(Punkt(5, 9), Punkt(4, 3));
    p1.show();
    p2.show();

    std::cout << std::endl << "Wielkosc P1 =  " << p1.area() << "\n";
    std::cout << std::endl << "Wielksoc P2 =  " << p2.area() << "\n";

    auto p3 = Punkt(6, 3);
    std::cout << "Czy punkt (6,3) zawarty jest w prostokacie? ";
    std::cout << (p1.is_inside(p3) ? "Tak" : "Nie") << "\n";
    std::cout << "Czy punkt (6,3) zawarty jest w prostokacie? ";
    std::cout << (p2.is_inside(p3) ? "Tak" : "Nie") << "\n";
    return 0;
}
