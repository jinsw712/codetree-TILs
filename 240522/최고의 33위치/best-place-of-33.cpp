#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int value;
    int res = 0; // 동전의 개수, 0으로 초기화
    int temp = 0;
    int ary[21][21];
    std::cin >> n;
    for(int i = 1; i <= n; i++) // 격자 생성
    {
        for(int j = 1; j <=n; j++)
        {
            std:: cin >> value;
            ary[i][j] = value;
        }
    }

    for(int i = 1; i <= n - 2; i++)
    {
        for(int j = i; j < i + 3; j++)
        {
            for(int k = i; k < i + 3; k++)
            {
                if(ary[j][k] == 1)
                    temp ++;
            }
        }
        if(temp > res)
            res = temp;
        temp = 0;
    }

    std::cout << res;

    return 0;
}