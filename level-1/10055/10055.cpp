#include <iostream>
#include <cmath>

int main() {
    int a, b;
    
    //持續接收兩個地點資料
    while (std::cin >> a >> b) 
    {

        //取距離絕對值後輸出答案
        int diff = std::abs(a - b);
        std::cout << diff << std::endl;
    }
    return 0;
}