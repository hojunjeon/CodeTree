#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    vector<string> s(5);
    s = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    cin >> c;
    int cnt = 0;
    for (int i = 0; i < 5; i++){

        if ((s[i][3] == c) || (s[i][2] == c)) {
            cout << s[i] << endl;
            cnt += 1;
        }
        
    }
    cout << cnt;

    return 0;
}