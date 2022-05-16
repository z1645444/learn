#include <iostream>

int main() {
    // 如果全是相同的值，那么只会输出一行统计反馈
    // 如果全是不同的值，那么将输出多行统计反馈
    int currVal = 0, val = 0;
    if(std::cin >> currVal) {
        int cnt = 1;
        while(std::cin >> val) {
            if(val == currVal) {
                ++cnt;
            } else {
                std::cout << currVal << " occurs "
                << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
        << cnt << " times " << std::endl;
    }

    return 0;
}