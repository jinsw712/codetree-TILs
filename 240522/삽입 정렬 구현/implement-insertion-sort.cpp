#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int value;
    int ary[100];
    std::cin >> n;

    for(int i = 0; i < n; i++) // 배열에 값 삽입
    {
        std::cin >> value;
        ary[i] = value;
    }

    for(int i = 1; i <n; i++) // 삽입 정렬 구현
    {
        for(int j = i - 1; j >= 0; j--)
        {
            if(ary[j] > ary[j + 1])
            {
                int temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) // 정렬된 배열 출력
    {
        std::cout << ary[i] << " ";
    }
    std::cout << '\n';

    return 0;
}