#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int start, end;
    cin >> start >> end;
    int cnt = 0;
    for (int i = start; i <= end; i ++){
        int prime_cnt = 0;
        for (int j = 2; j <= i - 1; j ++){
            if (i % j == 0) prime_cnt += 1;
            if (prime_cnt > 1) break;
        }
        if (prime_cnt == 1) cnt += 1;
    }
    cout << cnt;
    return 0;
}