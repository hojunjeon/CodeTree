#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int a,b;
    cin >> a >> b;

    if (a > b) cout << a*b;
    else cout << b / a;
    return 0;
}