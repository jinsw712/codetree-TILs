#include <iostream>

int checkAry[10];
int ary[100][100];

void initCheckary()
{
    for(int i = 0; i < 10; i++)
    {
        checkAry[i] = 0;
    }
}

int searchLucky(int m)
{
    int res = 0;
    for(int i = 0; i < 10; i++)
    {
        if(checkAry[i] >= m)
        {
            res = 1;
            return res;
        }
    }
    return 0;
}

int checkNUll()
{
    for(int i = 0; i < 10; i++)
    {
        if(checkAry[i] != 0)
        {
            return 1; // not null
        }
    }
    return 0;
}

int checkCount()
{
    for(int i = 0; i < 10; i++)
    {
        if(checkAry[i] != 0)
        {
            return i;
        }
    }
    return -1;
}

int searchAry(int m, int n)
{
    int temp = 0;
    for(int i = 0; i < n; i++) // 행에 대한 계산
    {
        for(int j = 0; j < n; j++)
        {
            if(checkNUll() == 0)
            {
                checkAry[ary[i][j]] += 1; // 처음 연속될 때
            }
            else if(checkCount() == ary[i][j]) // 바로 이전의 연속된 숫자와 같을때
            {
                checkAry[ary[i][j]] += 1; // 처음 연속될 때
            }
            else
            {
                initCheckary();
            }
        }
        temp += searchLucky(m);
        initCheckary();
    }

     for(int i = 0; i < n; i++) // 열에 대한 계산
    {
        for(int j = 0; j < n; j++)
        {
            checkAry[ary[j][i]] += 1;
        }
        temp += searchLucky(m);
        initCheckary();
    }

    return temp;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int m, n;
    int value;

    std::cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cin >> value;
            ary[i][j] = value;
        }
    }
    
    std::cout << searchAry(m,n);
    return 0;
}