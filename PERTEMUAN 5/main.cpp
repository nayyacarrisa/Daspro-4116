#include <iostream>
#include <stdio.h>

using namespace std;

/*
Nama : Nayya Carrisa Ristradevi
NIM  : A1.2022.14625

luas_sisi_depan == luas_sisi_belakang
luas_sisi_kanan == luas_sisi_kiri
luas_alas == luas_atap
*/
int main()
{
    float panjang, lebar, tinggi,
luas_alas, luas_sisi_depan,
luas_sisi_kanan, luas_permukaan_balok;

    cout << "Masukkan Panjang: ";
    cin >> panjang;
    cout << "Masukkan Lebar: ";
    cin >> lebar;
    cout << "Masukkan Tinggi: ";
    cin >> tinggi;
    luas_alas = panjang * lebar;
    luas_sisi_depan = panjang * tinggi;
    luas_sisi_kanan = lebar * tinggi;
    luas_permukaan_balok = 2 * (luas_alas
    + luas_sisi_depan + luas_sisi_kanan);
    cout << "Luas permukaan baloknya adalah : " << luas_permukaan_balok <<
    endl;
}
