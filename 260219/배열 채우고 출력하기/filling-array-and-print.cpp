#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char s[10];
    for (int i = 0; i < 10; i++) cin >> s[i];

    
    for (int i = 9; i >= 0; i--) cout << s[i];
        
    return 0;
}