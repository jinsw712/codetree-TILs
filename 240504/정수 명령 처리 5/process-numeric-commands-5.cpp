#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int N;
    int v;
    vector<int> vec;

    cin >> N;
    for(int i = 0; i < N; i++)    
    {
        cin >> s;
        if(s == "push_back")
        {
            cin >> v;
            vec.push_back(v);
        }
        else if( s == "pop_back")
        {
            vec.pop_back();
        }
        else if(s == "size")
        {
            cout << vec.size() << '\n';
        }
        else if(s == "get")
        {
            cin >> v;
            cout << vec[v - 1] << '\n';
        }
    }
    return 0;
}