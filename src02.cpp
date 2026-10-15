#include <iostream>
int main(){
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    for (int k = n-1; k <= 1; --k) {
        for (int t = 1; t <= k; ++t) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}