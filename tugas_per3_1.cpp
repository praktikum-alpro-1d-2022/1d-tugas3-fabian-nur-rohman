#include <iostream>
using namespace std;
int main(){
    int a = 8;
    int b = 10;
    int c;

    cout << "Mencari sisi miring segitiga" << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << "C= (" << a << "x" << a << ")+(" << b << "x" << b << ")" << endl;
    c = (a*a) + (b*b);
    cout << "Sisi miring/C= " << c << endl;

    return 0;
}
