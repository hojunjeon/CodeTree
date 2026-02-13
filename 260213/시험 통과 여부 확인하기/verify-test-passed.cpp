#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin >> n;

    if (n >= 80) cout << "pass";
    else cout << 80 - n<< " more score";
    return 0;
}