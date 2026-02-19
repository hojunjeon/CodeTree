#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    vector<int> v(10);
    cin >> a >> b;
    cout << a << " " << b << " ";
    v[0] = a, v[1] = b;
    for (int i = 2; i < 10 ; i ++){
        v[i] = (v[i-1] + v [i-2]) % 10;
        cout << v[i] << " ";
    }
    return 0;
}