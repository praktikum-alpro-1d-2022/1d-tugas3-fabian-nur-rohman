#include <iostream>
using namespace std;
int main(){
    float praktikum = 75;
    float uts = 70;
    float uas = 88;
    float nilaiAkhir;

    cout << "Nilai Praktikum: " << praktikum <<endl;
    cout << "Nilai UTS: " << uts <<endl;
    cout << "Nilai UAS: " << uas <<endl;

    nilaiAkhir = (praktikum*0.2) + (uts*0.3) + (uas*0.5);
    cout << "Nilai Akhir: " << nilaiAkhir <<endl;

    return 0;
}
