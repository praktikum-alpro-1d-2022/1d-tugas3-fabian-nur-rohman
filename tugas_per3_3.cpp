#include <iostream>
using namespace std;
int main(){
    float i,r,v;

    //Menghitung Arus Listrik
    cout << "Menghitung Arus Listrik" <<endl;
    cout << "Masukan tegangan listrik: ";
    cin >> v;
    cout << "Masukan hambatan listrik: ";
    cin >> r;
    i=v/r;
    cout << "Arus Listrik: " << i <<endl;
    cout << endl;

    //Menghitung Tegangan Listrik
    cout << "Menghitung Tegangan Listrik" <<endl;
    cout << "Masukan arus listrik: ";
    cin >> i;
    cout << "Masukan hambatan listrik: ";
    cin >> r;
    v=i*r;
    cout << "Tegangan Listrik: " << v <<endl;
    cout << endl;

    //Menghitung Hambatan Listrik
    cout << "Menghitung Hambatan Listrik" <<endl;
    cout << "Masukan tegangan listrik: ";
    cin >> v;
    cout << "Masukan arus listrik: ";
    cin >> i;
    r=v/i;
    cout << "Hambatan Listrik: " << r <<endl;
    cout << endl;

    return 0;
}
