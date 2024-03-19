// Menghitung Luas Segitiga.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sisi;

void inputdata() {
    cout << "Masukkan Nilai Sisi : ";
    cin >> sisi;
}

int hitungluas() {
    return sisi * sisi;
}

void display() {
    cout << "Luas Persegi : " << hitungluas() << endl;
}

int main()
{
    inputdata();
    display();
}


