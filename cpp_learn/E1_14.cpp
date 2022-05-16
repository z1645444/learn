#include <iostream>

int main() {
    // for 的 condition 由于是三元式
    // 所以主要用于遍历来获取数据并使用
    for(int i = 0; i < 10; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // while 的使用相对更加自由
    // 可以在 condition 中放入 std::cin
    // 待用户输入流结束后才结束循环
    int error_count = 10;
    while(error_count > 0) {
        // -经过一系列操作，消除问题以后-
        --error_count;
        std::cout << error_count << " ";
    }
    std::cout << std::endl;

    return 0;
}