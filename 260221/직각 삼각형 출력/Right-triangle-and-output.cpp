#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 1; i <= n; i ++){ 
        int k = 2 * i - 1;
        for (int j = 1; j <= k; j ++) cout << "*";
        cout << endl;
    }
    return 0;
}