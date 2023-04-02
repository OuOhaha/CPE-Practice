#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;

    // 建立 100 以內的質數表
    int prime[25] = {2,  3,  5,  7, 11, 13, 17, 19,
                    23, 29, 31, 37, 41, 43, 47, 53,
                    59, 61, 67, 71, 73, 79, 83, 89, 97};

    // 持續運行系統直到輸入 0
    while (scanf("%d", &n) && n != 0)
    {

        // 重置質數出現次數
        int prime_time[25] = {};

        // 質因數分解 n! 中被乘的每一個數
        for (int i = 2; i <= n; i++)
        {
            int j = i;

            // 質因數分解
            for (int p = 0; prime[p] <= j && p < 25; p++)
            {
                while (j % prime[p] == 0)
                {
                    prime_time[p]++;
                    j /= prime[p];
                }
            }
        }

        // 輸出答案
        printf("%3d! =", n);
        for (int i = 0; prime[i] <= n && i < 25; i++)
        {
            if (i % 15 == 0 && i != 0)
                printf("\n      ");
            printf("%3d", prime_time[i]);
        }
        printf("\n");
    }
    return 0;
}
