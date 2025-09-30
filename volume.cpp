#include <iostream>

using namespace std;

int main() {
    int pilihan;

    cout << "MENU" << endl;
    cout << "0. KELUAR" << endl;
    cout << "1. HITUNG VOLUME BALOK" << endl;
    cout << "2. HITUNG VOLUME BOLA" << endl;
    cout << "3. HITUNG VOLUME KERUCUT" << endl;
    cout << "4. HITUNG VOLUME SILINDER" << endl;
    cout << "5. HITUNG VOLUME LIMAS SEGITIGA" << endl;
    
    while(true) {
        cout << "\nMASUKKAN PILIHAN ANDA: ";
        cin >> pilihan;
    
        if(pilihan >= 1 && pilihan <= 5) {
            continue;       }
        else if(pilihan <= 6 ){
            cout << "Masukkan input yang benar";
        }
        else {
            cout << "Keluar" << endl;
            break;
        }
    }
    
    return 0;
}