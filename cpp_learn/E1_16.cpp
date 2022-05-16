#include <iostream>

int main() {
    int value = 0, sum = 0;

    // 终止符是 Ctrl + Z ，即 ^Z，并且输完后要输入回车
    std::cout << "Enter numbers: " << std::endl;
    while(std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum of them is " << sum << std::endl;

    return 0;
}