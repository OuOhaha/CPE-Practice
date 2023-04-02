#include <iostream>
#include <cstdlib>

int main() {
    long long a, b;
    
    //持續接收兩地資料
    while (std::cin >> a >> b) 
    {
        //取距離絕對值後輸出答案
        std::cout << std::abs(a - b) << std::endl;
    }
    
    return 0;
}
