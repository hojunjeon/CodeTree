#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int a[3];

    cin >> n;
    for (int i = 0; i < n; i ++) cin >> a[i];
    for (int i = 0; i < n; i ++) cout << (a[i] * a[i]) << " ";

    return 0;
}