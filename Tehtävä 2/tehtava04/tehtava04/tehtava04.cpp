#include <iostream>
using namespace std;

void summaaOsoittimina(int a, int b, int* summa) {
    *summa = a + b;
}

void summaaReferensseina(int a, int b, int& summa) {
    summa = a + b;
}

int main() {
    int luku1 = 5;
    int luku2 = 7;
    int tulos1, tulos2;

    summaaOsoittimina(luku1, luku2, &tulos1);
    cout << "Summa osoittimina on: " << tulos1 << "\n";

    summaaReferensseina(luku1, luku2, tulos2);
    cout << "Summa referensseinä on: " << tulos2 << "\n";

    return 0;
}
