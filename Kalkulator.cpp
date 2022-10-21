#include <iostream>
using namespace std;

int main (){

    // TIPE DATA
    int menu;
    char loop;
    float angka1,angka2,penjumlahan,pengurangan,perkalian,pembagian;

    // INPUT & OUTPUT
    cout << "----------------------------------------------\n";
    cout << "------------ KALKULATOR SEDERHANA ------------\n";
    cout << "----------------------------------------------\n\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << endl;

    cout << "Pilihan Menu Diatas (1-4) = ";
    cin >> menu;
    cout << endl;

    // OPSI
    switch (menu)
    {
    case 1:

        cout << "Masukan Angka 1 = ";
        cin >> angka1;
        cout << "Masukan Angka 2 = ";
        cin >> angka2;

        penjumlahan = angka1+angka2;
        cout << "Hasil Dari Penjumlahan Diatas Adalah = " << penjumlahan;

        break;

    case 2:

        cout << "Masukan Angka 1 = ";
        cin >> angka1;
        cout << "Masukan Angka 2 = ";
        cin >> angka2;

        pengurangan = angka1-angka2;
        cout << "Hasil Dari Pengurangan Diatas Adalah = " << pengurangan;

        break;

    case 3:

        cout << "Masukan Angka 1 = ";
        cin >> angka1;
        cout << "Masukan Angka 2 = ";
        cin >> angka2;

        perkalian = angka1*angka2;
        cout << "Hasil Dari Perkalian Diatas Adalah = " << perkalian;

        break;

    case 4:

        cout << "Masukan Angka Pertama = ";
        cin >> angka1;
        cout << "Masukan Angka Kedua = ";
        cin >> angka2;

        pembagian = angka1/angka2;
        cout << "Hasil Dari Pengurangan Diatas Adalah = " << pembagian;

        break;

    default:
        cout << "Mohon Masukkan Input Yang Benar";
    }
}