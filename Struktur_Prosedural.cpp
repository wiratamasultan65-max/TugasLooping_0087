#include <iostream>
using namespace std;

// Deklarasi Variabel Global
int angka;
int pilihan;

// Function untuk mengecek apakah angka adalah Bilangan Prima
bool cekPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}
// Function untuk mengecek apakah angka termasuk Deret Fibonacci
bool cekFibonacci(int n) {
    if (n < 0) return false;
    int a = 0;
    int b = 1;

    while (a < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == n);
}
// Prosedur untuk menerima input angka dari pengguna
void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}
// Prosedur untuk menampilkan menu pilihan
void tampilkanMenu() {
    cout << "\n===============================" << endl;
    cout << "      MENU PENGECEKAN ANGKA    " << endl;
    cout << "===============================" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu (0-2): ";
    cin >> pilihan;
}
// Prosedur untuk menampilkan hasil Prima
void tampilkanHasilPrima() {
    if (cekPrima(angka)) {
        cout << "=> " << angka << " adalah BILANGAN PRIMA." << endl;
    } else {
        cout << "=> " << angka << " BUKAN bilangan prima." << endl;
    }
}

// Prosedur untuk menampilkan hasil Fibonacci