#include <iostream>
#include <list>
#include <string>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    char ch;
    list<char> char_list;
    list<char>::iterator it;
    string str;
    cin >> n >> m;

    cin >> str;
    for(int i = 0; i < n; i++) // 빵 입력 배열에 삽입
    {
        char_list.push_back(str[i]);
    }
    it = char_list.end(); // iterator의 위치를 맨 뒤로

    for(int i = 0; i < m; i++) // 암호문 입력 및 처리
    {
        cin >> ch;
        if(ch == 'L') // iterator --;
        {
            if(it == char_list.begin())
                continue;
            else
                it--;
        }
        else if(ch == 'R')
        {
            if(it == char_list.end())
                continue;
            else
                it++;
        }
        else if(ch == 'D')
        {
            if(it == char_list.end())
                continue;
            else
            {
                it = char_list.erase(it);
                //it--;
            }
                
        }
        else if(ch == 'P')
        {
            cin >> ch; // 다음 문자 받기
            it = char_list.insert(it, ch);
            if(it == char_list.end())
                continue;
            it++;
        }
    }

    for(it = char_list.begin(); it != char_list.end(); it++)
    {
        cout << *it;
    }
    return 0;
}