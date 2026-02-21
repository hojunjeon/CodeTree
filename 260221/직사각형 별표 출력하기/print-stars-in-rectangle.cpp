#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    for (int y = 0; y < n; y++){
        for (int x = 0; x < m; x ++) cout << "* ";
        cout << endl;
    }
    return 0;
}