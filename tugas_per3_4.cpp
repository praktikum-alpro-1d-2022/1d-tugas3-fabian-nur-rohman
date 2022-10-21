#include <iostream>
using namespace std;
int main(){
    int b = 25;
    int x = 15;
    int c = 20;
    float y;

    cout << "Menghitung Persamaan" <<endl;
    cout << "Nilai B: " << b <<endl;
    cout << "Nilai X: " << x <<endl;
    cout << "Nilai C: " << c <<endl;
    cout << "Selesaikan Y= bx^2 + 0.5x - c"<< endl;
    cout << "Y = "<<b<<"("<<x<<")^2 + 0.5("<<x<<") - "<<c<<endl;
    y = (b*x*x)+0.5*x-c;
    cout << "Nilai Y: " << y <<endl;

    return 0;
}
