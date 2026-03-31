#include <iostream>
using namespace std;

// Variabel global
int angka;
int pilihan;

// Prosedur menampilkan menu pilihan
void tampilMenu() {
    cout << "\n--- MENU CEK BILANGAN ---" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
}

// Prosedur untuk menerima input angka
void inputUser() {
    cout << "Masukkan angka yang mau dicek: ";
    cin >> angka;
}

int main() {
    while (true) {
        tampilMenu();
        cin >> pilihan;
        if (pilihan == 0) {
            cout << "Program selesai, terima kasih!" << endl;
            break;
        }
    }
    return 0;
}

int main() {
    return 0;
}
