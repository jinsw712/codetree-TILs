#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int ary[100];
    int value;
    int flag = 0; // 0 일 경우 sorted, 1일 경우 unsorted

    cin >> n;
    for(int i = 0; i < n; i++) // 해당 배열에 해당하는 값 입력
    {
        cin >> value;
        ary[i] = value;
    }

    do // bubble sort 
    {
        flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(ary[i] >= ary[i+1])
            {
                int temp = ary[i];
                ary[i] = ary[i+1];
                ary[i+1] = temp;
                flag = 1;
            }
        }
    }while(flag == 1);

    for(int i = 0; i < n; i++)
    {
        cout << ary[i] << " ";
    }
    
    return 0;
}