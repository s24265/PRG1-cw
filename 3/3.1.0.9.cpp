#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
//nie dziala
auto quicksort(int a[], int n) -> void{

}
auto main() -> int{
    std::array<int, 10> przyklad { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = 10;
    int przyklad[n];
    
    srand(time(NULL));
 
    for (int i = 0; i < n; i++){
        przyklad[i] = (rand() % 100) - 50;
    }
    quicksort(przyklad, 0, n - 1);
 
    for (int i = 0; i < n; i++){
        std::cout << przyklad[i] << " ";
        std::cout << "\n";
    }
    return 0;
}