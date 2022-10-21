#include <iostream>
using namespace std;
int main () {
    // deklarasi variabel
    float I, V, R;
    float rumusArus, rumusTegangan, rumusHambatan;

     // input
     cout << "Masukan nilai arus (T) : ";
     cin >> I;

     cout << "Masukan nilai tegangan (V) : ";
     cin >> V;

     cout << "Masukan nilai hambatan (R) : ";
     cin >> R;

     // Rumus
     rumusArus = V / R;
     rumusTegangan = I * R;
     rumusHambatan = V / I;

     // Hasil Akhir
     cout << "Hasil perhitungan dari arus (T)" << rumusArus << endl;
     cout << "Hasil perhitungan dari tegangan (v)" << rumusTegangan << endl;
     cout << "Hasil perhitungan dari hambatan (R)" << rumusHambatan << endl;

     return 0;
}
