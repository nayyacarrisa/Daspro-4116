#include <iostream>

using namespace std;

int main()
{
   int val, max, min;
   cout << "Program ini Akan Berhenti Jika Anda Menginput Angka -99\n" << endl;
   while(true)
   {
       //input
       cout << "Masukkan Nilai : ";
       cin >> val;
       //proses looping akan berhenti ketika x = -99
       if(val == -99){
        break;
       }
       if(val != -99){
        if(max < val){
            max = val;
        }
        if(min > val){

       }
    }
   }
   cout << endl;
   cout << "max = " << max << endl;
   cout << "min = " << min << endl;
}
