#include <iostream>

using namespace std;

int main()
{
    while(true){
    cout << "Daftar Makanan" << endl;
    cout << "1.Nasi Kerikil" << endl;
    cout << "2.Rica-Rica Bekicot" << endl;
    cout << "3.Pepes Brotowali" << endl;
    cout << "4.Kepiting Presto" << endl;
    int id;
    cout << "Masukkan nomer pesanan: ";
    cin >> id;
    switch (id){
    case 1:
        cout << "Nasi Kerikil" << endl;
        break;
    case 2:
        cout << "Rica-Rica Bekicot" << endl;
        break;
    case 3:
        cout << "Pepes Brotowali" << endl;
        break;
    case 4:
        cout << "Kepiting Presto" << endl;
        break;
    default:
        cout << "Maaf,kode makanan tidak ditemukan";
    }
        }
}

