#include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    if(v2 < v1) {
        int temp = v2;
        v2 = v1;
        v1 = temp;
    }

    while(v1 <= v2) {
        std::cout << v1 << " ";
        ++v1;
    }
    std::cout << std::endl;

    return 0;
}