#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int c3 = 0 , c5 = 0;

    for (int i=0; i<10; i++) {
        cin >> n;
        if (n % 3 ==  0) c3 ++;
        if (n % 5 ==  0) c5 ++;
    }
    cout << c3 << " " << c5;

    return 0;
}