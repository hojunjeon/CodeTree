#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i< n; i++) cin >> v[i];

    for(int i = n-1; i >= 0; i --){
        if (v[i] % 2 == 0) cout << v[i] << " ";
    }
    return 0;
}