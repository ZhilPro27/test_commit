#include <iostream>
#include <string>
using namespace std;

int arr[20];    // Deklarasi variable global array dengan panjang 20 dan nama arr
int n;  // Deklarasi variable global n untuk menyimpan elemen pada array

void input(){   // Prosedur input
    while (true){
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> n;
        if (n <= 20){
            break;
        }
        else {
            cout << "\nArray maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i=0;i<n;i++){
        cout << "Data ke-" << (i+1) << " = ";
        cin >> arr[i];
    }
} 