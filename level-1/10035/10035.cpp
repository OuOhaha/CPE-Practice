#include <iostream>

int main()
{
    int num1, num2;

    //運行系統
    while (std::cin >> num1 >> num2)
    {

        //判斷輸入數字是否皆為0
        if (num1 == 0 && num2 == 0)
            break;

        //歸零進位次數
        int carry = 0;
        int total = 0;

        //計算進位次數
        while (num1 > 0 || num2 > 0)
        {

            //判斷是否進位
            carry = carry + (num1 % 10) + (num2 % 10);
            if (carry >= 10)
                total++;

            //捨棄最後一位數
            carry /= 10;
            num1 /= 10;
            num2 /= 10;
        }

        //輸出結果
        if (total == 0)
            std::cout << "No carry operation." << std::endl;
        else if(total == 1)
            std::cout << "1 carry operation." << std::endl;
        else
            std::cout << total << " carry operations." << std::endl;
    }
    return 0;
}