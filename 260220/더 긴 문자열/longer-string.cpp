#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2;
    cin >> s1 >> s2;
    int l1 = s1.length();
    int l2 = s2.length();
    if (l1 > l2) cout << s1 << " "<< l1 ;
    else if (l1 == l2) cout << "same";
    else cout << s2 << " " << l2 ;
    return 0;
}