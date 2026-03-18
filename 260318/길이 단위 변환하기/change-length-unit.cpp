#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float fit = 30.48, mile = 160934.0;

    float n1 = 9.2*fit;
    float n2 = 1.3*mile;

    cout << fixed;
    cout.precision(1);

    cout << "9.2ft = " << n1 << "cm"<<endl;
    cout << "1.3mi = " << n2 << "cm"<<endl;


    return 0;
}