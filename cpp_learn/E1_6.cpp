#include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;

    // 输出流未结束就使用了终止符 ; 会导致程序出错
    // 要么删除终止符 ; 要么分开输出
    // std::cout << "The sum of " << v1;
    // << " and " << v2;
    // << " is " << v1 + v2 << std::endl;

    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;

    return 0;
}