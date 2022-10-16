#include <iostream>

using namespace std;

int main()
{
    cout << "Bilangan genap 1-100" << endl;
    cout << endl;
    for (int i = 1; i <= 100; i++){
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    cout << "Bilangan ganjil 1-100" << endl;
    cout << endl;
    for (int g = 1; g <= 100; g++) {
        if (g % 2 == 1) {
            cout << g << endl;
        }
    }

     cout << endl;
     cout << "Bilangan genap berkelipatan 6 dari 1-100" << endl;
     cout << endl;
     for (int kelipatan6 = 0; kelipatan6 <=100; kelipatan6++){
        if (kelipatan6 % 6 == 0)
            cout << kelipatan6 << endl;
     }
}


