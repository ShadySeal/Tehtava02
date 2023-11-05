#include <iostream>
using namespace std;

void nollaa(int* taulukko, int koko) {
    for (int i = 0; i < koko; ++i) {
        taulukko[i] = 0;
    }
}

int main() {
    const int taulukonKoko = 5;

    int numerot[taulukonKoko] = { 1, 2, 3, 4, 5 };

    cout << "Alkuperäinen taulukko: ";
    for (int i = 0; i < taulukonKoko; ++i) {
        cout << numerot[i] << " ";
    }
    cout << "\n";

    nollaa(numerot, taulukonKoko);

    cout << "Taulukko nollauksen jälkeen: ";
    for (int i = 0; i < taulukonKoko; ++i) {
        cout << numerot[i] << " ";
    }

    return 0;
}
