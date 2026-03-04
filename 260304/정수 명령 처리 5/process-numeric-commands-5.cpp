#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i<n;i++){
        string cmd;
        int num;
        cin >> cmd;
        if (cmd == "push_back"){
            cin >> num;
            v.push_back(num);
        }
        else if (cmd == "pop_back"){
            v.pop_back();
        }
        else if (cmd == "get"){
            cin >> num;
            cout << v[num - 1] <<endl;
        }
        else if (cmd == "size"){
            cout << v.size() <<endl;
        }
    }
    return 0;
}