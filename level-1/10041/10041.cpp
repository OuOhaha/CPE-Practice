#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int test;
    std::cin >> test;
    while (test--)
    {
        int relative;
        std::cin >> relative;

        //建立陣列 & 輸入資料
        std::vector<int> st_num(relative);
        for (int i = 0; i < relative; i++)
            std::cin >> st_num[i];

        //將資料排序
        std::sort(st_num.begin(), st_num.end());

        //取距離總數
        int mid = st_num[relative / 2];
        int pos = 0;
        for (int i = 0; i < relative; i++)
            pos += std::abs(st_num[i] - mid);

        //輸出答案
        std::cout << pos << std::endl;
    }
    return 0;
}