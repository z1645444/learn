#include <iostream>

int main() {
    int v1, v2, v3, v4;
    int sum1, sum2, sum3;

    // 1.4.1 练习 1.9
    for (v1 = 50, sum1 = 0; v1 <= 100; ++v1) {
        sum1 += v1;
    }
    std::cout << "Sum of 50 to 100 is " << sum1 << std::endl;

    // 1.4.1 练习 1.10
    for (v2 = 10, sum2 = 0; v2 >= 0; --v2) {
        sum2 += v2;
    }
    std::cout << "Sum of 10 to 0 is " << sum2 << std::endl;

    // 1.4.1 练习 1.11
    std::cout << "Enter two numbers: ";
    scanf("%d %d", &v3, &v4);
    int temp = v3;
    for (sum3 = 0; temp <= v4; ++temp) {
        sum3 += temp;
    }
    std::cout << "Sum between " << v3 << " and " << v4 << " is " << sum3
              << std::endl;

    return 0;
}