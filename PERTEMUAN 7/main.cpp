#include <iostream>

using namespace std;

int main()
{
    /*
    Nama    : Nayya Carrisa Ristradevi
    NIM     : A11.2022.14625
    Kelompok: 4116
    */

    float temperature;
    cout << "Masukkan temperature : " <<endl;
    cin >> temperature;
    if (temperature <= 0)
    {
       cout << "ICE" <<endl;
    }
    else if (temperature > 100){
        cout << "GAS" <<endl;
    }else{
        cout << "LIQUID" <<endl;
        }
}
