#include <iostream>

int main() {
    int w;
    std::cin >> w;

    if(w <= 2) std::cout << "NO";
    else std::cout << ((w % 2 == 0) ? "YES" : "NO");

    return 0;
}
