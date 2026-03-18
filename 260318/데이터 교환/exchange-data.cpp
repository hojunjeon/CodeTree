#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a=5,b=6,c=7;
    int t1=a,t2=b;
    a=c;
    c=t2;
    b=t1;

    cout<<a<<endl<<b<<endl<<c;
    return 0;
}