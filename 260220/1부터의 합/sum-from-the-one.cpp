#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int sum = 0, i = 0;

    while (sum < n){
        sum += ++i;
    }
    cout << i;
    return 0;
}