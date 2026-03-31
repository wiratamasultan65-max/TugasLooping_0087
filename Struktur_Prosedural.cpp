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