#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    list<int> linkedList;
    string str;
    int t;
    int value;

    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> str;
        if(str == "push_front")
        {
            cin >> value;
            linkedList.push_front(value);
        }
        else if(str == "push_back")
        {
            cin >> value;
            linkedList.push_back(value);
        }
        else if(str == "pop_front")
        {
            value = linkedList.front();
            linkedList.pop_front();
            cout << value << '\n';
        }
        else if(str == "pop_back")
        {
            value = linkedList.back();
            linkedList.pop_back();
            cout << value << '\n';
        }
        else if(str == "size")
        {
            cout << linkedList.size() << '\n';
        }
        else if(str == "empty")
        {
            if(linkedList.empty())
                cout << 1 <<'\n';
            else
                cout << 0 << '\n';
        }
        else if(str == "front")
        {
            cout << linkedList.front() << '\n';
        }
        else
            cout << linkedList.back() << '\n';
    
    }




    return 0;
}