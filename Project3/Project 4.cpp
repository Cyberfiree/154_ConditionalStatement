#include <iostream>
using namespace std;

int main()
{
    int nilaiMatematika, nilaiFisika, nRerata;
    string status;

    cout << "Masukkan Nilai Matematika = ";
    cin >> nilaiMatematika;

    cout << "Masukkan nilai Fisika = ";
    cin >> nilaiFisika;

    nRerata = (nilaiMatematika + nilaiFisika) / 2;

    if (nRerata > 60) {
        status = "Lulus";
    }
    else if (nilaiMatematika > 70) {
        status = "Lulus";
    }
    else {
        status = "Tidak Lulus";
    }
  
    cout << "Nilai MTK = " << nilaiMatematika << endl;
    cout << "Nilai Fisika = " << nilaiFisika << endl;
    cout << "Rata-ratanya adalah = " << nRerata << endl;
    cout << "Statusnya adalah" << status << endl;
