#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int ary[100];
    int value;

    std::cin >> n;
    
    for(int i = 0; i < n; i++) // 배열에 해당하는 수 삽입
    {
        std::cin >> value;
        ary[i] = value;
    }

    for(int i = 0; i < n; i ++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++) // 최소가 되는 index 찾기
        {
            if(ary[j] < ary[min])
            {
                min = j;
            }
        }
        int temp = ary[i];
        ary[i] = ary[min];
        ary[min] = temp;
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << ary[i] << " ";
    }

    std::cout << '\n';
    return 0;
}