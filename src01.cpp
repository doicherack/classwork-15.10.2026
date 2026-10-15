#include <iostream>
int main(){
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    for (int k = 1; k <= n; ++k) {
        for (int t = 0; t < k; ++t) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}